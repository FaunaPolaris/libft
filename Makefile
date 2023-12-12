NAME		=	libfpp.a
CC		=	gcc
C_FLAGS		=	-Wall -Wextra -Werror -g3 -ggdb
AR		=	ar rcs
RM		=	rm -rf

RESET		=	\033[0m
RED		=	\033[0;36m

LIBS		=	$(TYPES_H) $(CONVERT_H) $(CHECK_H) $(MATHS_H) $(DATA_H) $(MEMORY_H) $(PRINTING_H) $(PRINTF_H)

INCLUDE		=	-I ./header/

all: $(LIBS) $(NAME)

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

OBJS_CHAR_DIR	=	objects
SRCS_CHAR	=	count
SRCS_CHAR	:=	$(addprefix sources/types/char_,$(SRCS_CHAR))
SRCS_CHAR	:=	$(addsuffix .c,$(SRCS_CHAR))
OBJS_CHAR	=	$(addprefix $(OBJS_CHAR_DIR)/, $(SRCS_CHAR:.c=.o))

OBJS_FD_DIR	=	objects
SRCS_FD		=	gnl read_all read_upto
SRCS_FD		:=	$(addprefix sources/types/fd_,$(SRCS_FD))
SRCS_FD		:=	$(addsuffix .c,$(SRCS_FD))
OBJS_FD		=	$(addprefix $(OBJS_FD_DIR)/, $(SRCS_FD:.c=.o))

OBJS_INT_DIR	=	objects
SRCS_INT	=	len len_base
SRCS_INT	:=	$(addprefix sources/types/int_,$(SRCS_INT))
SRCS_INT	:=	$(addsuffix .c,$(SRCS_INT))
OBJS_INT	=	$(addprefix $(OBJS_INT_DIR)/, $(SRCS_INT:.c=.o))

OBJS_VOID_DIR	=	objects
SRCS_VOID	=	plen
SRCS_VOID	:=	$(addprefix sources/types/void_,$(SRCS_VOID))
SRCS_VOID	:=	$(addsuffix .c,$(SRCS_VOID))
OBJS_VOID	=	$(addprefix $(OBJS_VOID_DIR)/, $(SRCS_VOID:.c=.o))

$(OBJS_VOID_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

$(OBJS_INT_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

$(OBJS_FD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

$(OBJS_CHAR_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

$(OBJS_STR_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

$(TYPES_H): $(OBJS_STR) $(OBJS_CHAR) $(OBJS_FD) $(OBJS_INT) $(OBJS_VOID)
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^

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
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^

# ----------
# convert.h
# ----------

CONVERT_H	=	convert.a

OBJS_CONV_DIR	=	objects
SRCS_CONV	=	atoi atoll atox itoa itoa_base toupper tolower
SRCS_CONV	:=	$(addprefix sources/convert/conv_, $(SRCS_CONV))
SRCS_CONV	:=	$(addsuffix .c, $(SRCS_CONV))
OBJS_CONV	=	$(addprefix $(OBJS_CONV_DIR)/, $(SRCS_CONV:.c=.o))

$(OBJS_CONV_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(CONVERT_H): $(OBJS_CONV)
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^

# ----------
# maths.h
# ----------

MATHS_H		=	maths.a

OBJS_MTH_DIR	=	objects
SRCS_MTH	=	abs lerp pow
SRCS_MTH	:=	$(addprefix sources/maths/mth_, $(SRCS_MTH))
SRCS_MTH	:=	$(addsuffix .c, $(SRCS_MTH))
OBJS_MTH	=	$(addprefix $(OBJS_MTH_DIR)/, $(SRCS_MTH:.c=.o))

$(OBJS_MTH_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(MATHS_H): $(OBJS_MTH)
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^

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
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^

# ----------
#  data.h
# ----------

DATA_H		=	data.a

OBJS_GRID_DIR	=	objects
SRCS_GRID	=	free new countd counts fillbrdr fill iter len newsqr
SRCS_GRID	:=	$(addprefix sources/data/grid_, $(SRCS_GRID))
SRCS_GRID	:=	$(addsuffix .c, $(SRCS_GRID))
OBJS_GRID	=	$(addprefix $(OBJS_GRID_DIR)/, $(SRCS_GRID:.c=.o))

OBJS_FRM_DIR	=	objects
SRCS_FRM	=	new
SRCS_FRM	:=	$(addprefix sources/data/frm_, $(SRCS_FRM))
SRCS_FRM	:=	$(addsuffix .c, $(SRCS_FRM))
OBJS_FRM	=	$(addprefix $(OBJS_FRM_DIR)/, $(SRCS_FRM:.c=.o))

OBJS_DLL_DIR	=	objects
SRCS_DLL	=	add_back add_frnt clear closest closest_hgher dindex
SRCS_DLL	+=	di_haslower di_lowerb di_lowerf di_value di_lower
SRCS_DLL	+=	find_end has has_dupls has_hgher has_lower highest index
SRCS_DLL	+=	is_crescent lindex2 lindex3 lowest mediam new new_node
SRCS_DLL	+=	next_hgher next_lower pointer rindex rlindex2 rlindex3 size
SRCS_DLL	:=	$(addprefix sources/data/llist/dll_, $(SRCS_DLL))
SRCS_DLL	:=	$(addsuffix .c, $(SRCS_DLL))
OBJS_DLL	=	$(addprefix $(OBJS_DLL_DIR)/, $(SRCS_DLL:.c=.o))

$(OBJS_DLL_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(OBJS_GRID_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(OBJS_FRM_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(DATA_H): $(OBJS_GRID) $(OBJS_FRM)
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^

# ----------
#  printing.h
# ----------

PRINTING_H	=	printing.a

OBJS_PUT_DIR	=	objects
SRCS_PUT	=	char endl nbr_base nbr pointer str dll
SRCS_PUT	:=	$(addprefix sources/printing/put_, $(SRCS_PUT))
SRCS_PUT	:=	$(addsuffix .c, $(SRCS_PUT))
OBJS_PUT	=	$(addprefix $(OBJS_PUT_DIR)/, $(SRCS_PUT:.c=.o))

$(OBJS_PUT_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(PRINTING_H): $(OBJS_PUT)
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^

# ----------
#  printf.h
# ----------

PRINTF_H	=	printf.a

OBJS_FP_DIR	=	objects
SRCS_FP		=	printf printf_error precision padding convert
SRCS_FP		:=	$(addprefix sources/printf/fp_, $(SRCS_FP))
SRCS_FP		:=	$(addsuffix .c, $(SRCS_FP))
OBJS_FP		=	$(addprefix $(OBJS_FP_DIR)/, $(SRCS_FP:.c=.o))

$(OBJS_FP_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $^ -o $@ $(INCLUDE)

$(PRINTF_H): $(OBJS_FP)
	@printf "archiving: $(RED)%30s$(RESET)\n" $^
	@$(AR) $(NAME) $^


$(NAME):
	ar -t $@

clean:
	@$(RM) objects
	@$(RM) $(LIBS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
