NAME		=	libfpp.a
CC		=	gcc
C_FLAGS		=	-Wall -Wextra -Werror -g3 -ggdb
AR		=	ar rcs
RM		=	rm -rf

LIBS		=	$(TYPES_H) $(CONVERT_H) $(CHECK_H) $(MATHS_H) $(GRID_H) $(MEMORY_H)

INCLUDE		=	-I ./header/

# sources:
 
# ----------
# types.h
# ----------

TYPES_H		=	types.a

OBJS_STR_DIR	=	objects
SRCS_STR	=	lcat lcpy len cut comp ncmp is_digit iteri sub
SRCS_STR	+=	substr padding ndup dup find_str find_char rfind_char
SRCS_STR	+=	join copy_upto split split_once splitsplit
SRCS_STR	:=	$(addprefix sources/types/str_,$(SRCS_STR))
SRCS_STR	:=	$(addsuffix .c,$(SRCS_STR))
OBJS_STR	=	$(addprefix $(OBJS_STR_DIR)/, $(SRCS_STR:.c=.o))

$(OBJS_STR_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

$(TYPES_H): $(OBJS_STR)
	@$(AR) $@ $^

# ----------
# check.h
# ----------

CHECK_H		=	check.a

OBJS_CHECK_DIR	=	objects
SRCS_CHECK	=	highest lowest
SRCS_CHECK	:=	$(addprefix sources/check/check_, $(SRCS_CHECK))
SRCS_CHECK	:=	$(addsuffix .c, $(SRCS_CHECK))
OBJS_CHECK	=	$(addprefix $(OBJS_CHECK_DIR)/, $(SRCS_CHECK:.c=.o))

OBJS_IS_DIR	=	objects
SRCS_IS		=	alnum alpha ascii digit prime print space upper
SRCS_IS		:=	$(addprefix sources/check/is_, $(SRCS_IS))
SRCS_IS		:=	$(addsuffix .c, $(SRCS_IS))
OBJS_IS		=	$(addprefix $(OBJS_CHECK_DIR)/, $(SRCS_IS:.c=.o))

$(OBJS_CHECK_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(OBJS_IS_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(CHECK_H): $(OBJS_CHECK) $(OBJS_IS)
	@$(AR) $@ $^

# ----------
# convert.h
# ----------

CONVERT_H	=	convert.a

OBJS_CONV_DIR	=	objects
SRCS_CONV	=	atoi atoll atox itoa itoa_base toupper tolower
SRCS_CONV	:=	$(addprefix sources/convert/conv_, $(SRCS_CONV))
SRCS_CONV	:=	$(addsuffix .c, $(SRCS_CONV))
OBJS_CONV	=	$(addprefix $(OBJS_CONV_DIR), $(SRCS_CONV:.c=.o))

$(OBJS_CONV_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(CONVERT_H): $(OBJS_CONV)
	@$(AR) $@ $^

# ----------
# maths.h
# ----------

MATHS_H		=	maths.a

OBJS_MTH_DIR	=	objects
SRCS_MTH	=	abs lerp pow
SRCS_MTH	:=	$(addprefix sources/maths/mth_, $(SRCS_MTH))
SRCS_MTH	:=	$(addsuffix .c, $(SRCS_MTH))
OBJS_MTH	=	$(addprefix $(OBJS_MTH_DIR), $(SRCS_MTH:.c=.o))

$(OBJS_MTH_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(MATHS_H): $(OBJS_MTH)
	@$(AR) $@ $^

# ----------
#  memory.h
# ----------

MEMORY_H	=	memory.a

OBJS_MEM_DIR	=	objects
SRCS_MEM	=	bzero calloc comp cpy find move set
SRCS_MEM	:=	$(addprefix sources/memory/mem_, $(SRCS_MEM))
SRCS_MEM	:=	$(addsuffix .c, $(SRCS_MEM))
OBJS_MEM	=	$(addprefix $(OBJS_MEM_DIR)/, $(SRCS_MEM:.c=.o))

$(OBJS_MEM_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(MEMORY_H): $(OBJS_MEM)
	@$(AR) $@ $^

# ----------
#  grid.h
# ----------

GRID_H		=	grid.a

OBJS_GRID_DIR	=	objects
SRCS_GRID	=	free free3
SRCS_GRID	:=	$(addprefix sources/grid/grid_, $(SRCS_GRID))
SRCS_GRID	:=	$(addsuffix .c, $(SRCS_GRID))
OBJS_GRID	=	$(addprefix $(OBJS_GRID_DIR)/, $(SRCS_MEM:.c.o))

$(OBJS_GRID_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(GRID_H): $(OBJS_GRID)
	@$(AR) $@ $^

all: $(NAME)

$(NAME):
	@for lib in $(LIBS); do \
		if [ -f "$$lib" ]; then \
			ar -r $@ $$lib; \
			printf "%s added to $@\n" $$lib; \
		fi; \
	done

clean:
	@$(RM) objects
	@$(RM) $(LIBS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
