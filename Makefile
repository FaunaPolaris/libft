NAME		=	libfpp.a
CC		=	gcc
C_FLAGS		=	-Wall -Wextra -Werror -g3 -ggdb
AR		=	ar rc
RM		=	rm -rf

INCLUDE		=	-I ./header/
OBJS_DIR	=	objects

# sources:
 
# ----------
# types.h
# ----------

TYPE_H		=	types.a

SRCS_STR	=	lcat lcpy len cut comp ncmp is_digit iteri sub
SRCS_STR	+=	substr padding ndup dup find_str find_char rfind_char
SRCS_STR	+=	join copy_upto split split_once splitsplit
SRCS_STR	:=	$(addprefix sources/types/str_,$(SRCS_STR))
SRCS_STR	:=	$(addsuffix .c,$(SRCS_STR))

$(OBJS_STR)/%.o: $(SRCS_STR)
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

$(TYPES_H): $(OBJS_STR)
	@$(AR) $@ $^

# ----------
# check.h
# ----------

CHECK_H		=	check.a

SRCS_CHECK	=	highest lowest
SRCS_CHECK	:=	$(addprefix sources/check/check_, $(SRCS_CHECK))
SRCS_CHECK	:=	$(addsuffix .c, $(SRCS_CHECK))

SRCS_IS		=	alnum alpha ascii digit prime print space upper
SRCS_IS		:=	$(addprefix sources/check/is_, $(SRCS_IS))
SRCS_IS		:=	$(addsuffix .c, $(SRCS_IS))

$(OBJS_CHECK)/%.o:%.c
	@$(CC) $(C_FLAGS) -c $(SRCS_CHECK) -o $@ $(INCLUDE)

$(OBJS_IS)/%.o:%.c
	@$(CC) $(C_FLAGS) -c $(SRCS_IS) -o $@ $(INCLUDE)

$(CHECK_H): $(OBJS_CHECK) $(OBJS_IS)
	@$(AR) $@ $^

# ----------
# convert.h
# ----------

CONVERT_H	=	convert.a

SRCS_CONV	=	atoi atoll atox itoa itoa_base toupper tolower
SRCS_CONV	:=	$(addprefix sources/convert/conv_, $(SRCS_CONV))
SRCS_CONV	:=	$(addsuffix .c, $(SRCS_CONV))

$(OBJS_CONV)/%.o:%.c
	@$(CC) $(C_FLAGS) -c $(SRCS_CONV) -o $@ $(INCLUDE)

$(CONVERT_H): $(OBJS_CONV)
	@$(AR) $@ $^

# ----------
# maths.h
# ----------

MATHS_H		=	maths.a

SRCS_MTH	=	abs lerp pow
SRCS_MTH	:=	$(addprefix sources/maths/mth_, $(SRCS_MTH))
SRCS_MTH	:=	$(addsuffix .c, $(SRCS_MTH))

LIBS		=	$(TYPES_H) $(CONVERT_H) $(CHECK_H) $(MATHS_H)

$(OBJS_MTH)/%.o:%.c
	@$(CC) $(C_FLAGS) -c $(SRCS_MTH) -o $@ $(INCLUDE)

OBJS_ALL	= $(OBJS_STR) $(OBJS_CHECK) $(OBJS_CONV) $(OBJS_IS) $(OBJS_MTH)

$(MATHS_H): $(OBJS_MTH)
	@$(AR) $@ $^

all: $(NAME)

$(NAME): $(LIBS)
	@if [ -f "$^" ]; then \
	ar -r $@ $^; \
	printf "%s added to libfpp\n" "$^"; \
	fi

clean:
	@$(RM) $(OBJS_DIR)
	@$(RM) $(LIBS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
