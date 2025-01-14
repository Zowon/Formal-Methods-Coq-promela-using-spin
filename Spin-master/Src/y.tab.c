/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 9 "spin.y"

#include "spin.h"
#include <sys/types.h>
#ifndef PC
#include <unistd.h>
#endif
#include <stdarg.h>
#include <stdlib.h>

#define YYMAXDEPTH	20000	/* default is 10000 */
#define YYDEBUG		0
#define Stop	nn(ZN,'@',ZN,ZN)
#define PART0	"place initialized declaration of "
#define PART1	"place initialized chan decl of "
#define PART2	" at start of proctype "

static	Lextok *ltl_to_string(Lextok *);

extern  Symbol	*context, *owner;
extern	Lextok *for_body(Lextok *, int);
extern	void for_setup(Lextok *, Lextok *, Lextok *);
extern	Lextok *for_index(Lextok *, Lextok *);
extern	Lextok *sel_index(Lextok *, Lextok *, Lextok *);
extern  void    keep_track_off(Lextok *);
extern	void	safe_break(void);
extern	void	restore_break(void);
extern  int	u_sync, u_async, dumptab, scope_level;
extern	int	initialization_ok;
extern	short	has_sorted, has_random, has_enabled, has_pcvalue, has_np, has_priority;
extern	short	has_code, has_state, has_ltl, has_io;
extern	void	check_mtypes(Lextok *, Lextok *);
extern	void	count_runs(Lextok *);
extern	void	no_internals(Lextok *);
extern	void	any_runs(Lextok *);
extern	void	explain(int);
extern	void	ltl_list(char *, char *);
extern	void	validref(Lextok *, Lextok *);
extern  void	sanity_check(Lextok *);
extern	char	yytext[];

int	Mpars = 0;	/* max nr of message parameters  */
int	nclaims = 0;	/* nr of never claims */
int	ltl_mode = 0;	/* set when parsing an ltl formula */
int	Expand_Ok = 0, realread = 1, IArgs = 0, NamesNotAdded = 0;
int	in_for = 0, in_seq = 0, par_cnt = 0;
int	dont_simplify = 0;
char	*claimproc = (char *) 0;
char	*eventmap = (char *) 0;

static	char *ltl_name;
static	int  Embedded = 0, inEventMap = 0, has_ini = 0;


#line 125 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ASSERT = 258,                  /* ASSERT  */
    PRINT = 259,                   /* PRINT  */
    PRINTM = 260,                  /* PRINTM  */
    PREPROC = 261,                 /* PREPROC  */
    C_CODE = 262,                  /* C_CODE  */
    C_DECL = 263,                  /* C_DECL  */
    C_EXPR = 264,                  /* C_EXPR  */
    C_STATE = 265,                 /* C_STATE  */
    C_TRACK = 266,                 /* C_TRACK  */
    RUN = 267,                     /* RUN  */
    LEN = 268,                     /* LEN  */
    ENABLED = 269,                 /* ENABLED  */
    SET_P = 270,                   /* SET_P  */
    GET_P = 271,                   /* GET_P  */
    EVAL = 272,                    /* EVAL  */
    PC_VAL = 273,                  /* PC_VAL  */
    TYPEDEF = 274,                 /* TYPEDEF  */
    MTYPE = 275,                   /* MTYPE  */
    INLINE = 276,                  /* INLINE  */
    RETURN = 277,                  /* RETURN  */
    LABEL = 278,                   /* LABEL  */
    OF = 279,                      /* OF  */
    GOTO = 280,                    /* GOTO  */
    BREAK = 281,                   /* BREAK  */
    ELSE = 282,                    /* ELSE  */
    SEMI = 283,                    /* SEMI  */
    ARROW = 284,                   /* ARROW  */
    IF = 285,                      /* IF  */
    FI = 286,                      /* FI  */
    DO = 287,                      /* DO  */
    OD = 288,                      /* OD  */
    FOR = 289,                     /* FOR  */
    SELECT = 290,                  /* SELECT  */
    IN = 291,                      /* IN  */
    SEP = 292,                     /* SEP  */
    DOTDOT = 293,                  /* DOTDOT  */
    ATOMIC = 294,                  /* ATOMIC  */
    NON_ATOMIC = 295,              /* NON_ATOMIC  */
    D_STEP = 296,                  /* D_STEP  */
    UNLESS = 297,                  /* UNLESS  */
    TIMEOUT = 298,                 /* TIMEOUT  */
    NONPROGRESS = 299,             /* NONPROGRESS  */
    ACTIVE = 300,                  /* ACTIVE  */
    PROCTYPE = 301,                /* PROCTYPE  */
    D_PROCTYPE = 302,              /* D_PROCTYPE  */
    HIDDEN = 303,                  /* HIDDEN  */
    SHOW = 304,                    /* SHOW  */
    ISLOCAL = 305,                 /* ISLOCAL  */
    PRIORITY = 306,                /* PRIORITY  */
    PROVIDED = 307,                /* PROVIDED  */
    FULL = 308,                    /* FULL  */
    EMPTY = 309,                   /* EMPTY  */
    NFULL = 310,                   /* NFULL  */
    NEMPTY = 311,                  /* NEMPTY  */
    CONST = 312,                   /* CONST  */
    TYPE = 313,                    /* TYPE  */
    XU = 314,                      /* XU  */
    NAME = 315,                    /* NAME  */
    UNAME = 316,                   /* UNAME  */
    PNAME = 317,                   /* PNAME  */
    INAME = 318,                   /* INAME  */
    STRING = 319,                  /* STRING  */
    CLAIM = 320,                   /* CLAIM  */
    TRACE = 321,                   /* TRACE  */
    INIT = 322,                    /* INIT  */
    LTL = 323,                     /* LTL  */
    ASGN = 324,                    /* ASGN  */
    SND = 325,                     /* SND  */
    O_SND = 326,                   /* O_SND  */
    RCV = 327,                     /* RCV  */
    R_RCV = 328,                   /* R_RCV  */
    IMPLIES = 329,                 /* IMPLIES  */
    EQUIV = 330,                   /* EQUIV  */
    OR = 331,                      /* OR  */
    AND = 332,                     /* AND  */
    ALWAYS = 333,                  /* ALWAYS  */
    EVENTUALLY = 334,              /* EVENTUALLY  */
    UNTIL = 335,                   /* UNTIL  */
    WEAK_UNTIL = 336,              /* WEAK_UNTIL  */
    RELEASE = 337,                 /* RELEASE  */
    NEXT = 338,                    /* NEXT  */
    EQ = 339,                      /* EQ  */
    NE = 340,                      /* NE  */
    GT = 341,                      /* GT  */
    LT = 342,                      /* LT  */
    GE = 343,                      /* GE  */
    LE = 344,                      /* LE  */
    LSHIFT = 345,                  /* LSHIFT  */
    RSHIFT = 346,                  /* RSHIFT  */
    INCR = 347,                    /* INCR  */
    DECR = 348,                    /* DECR  */
    UMIN = 349,                    /* UMIN  */
    NEG = 350,                     /* NEG  */
    DOT = 351                      /* DOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ASSERT 258
#define PRINT 259
#define PRINTM 260
#define PREPROC 261
#define C_CODE 262
#define C_DECL 263
#define C_EXPR 264
#define C_STATE 265
#define C_TRACK 266
#define RUN 267
#define LEN 268
#define ENABLED 269
#define SET_P 270
#define GET_P 271
#define EVAL 272
#define PC_VAL 273
#define TYPEDEF 274
#define MTYPE 275
#define INLINE 276
#define RETURN 277
#define LABEL 278
#define OF 279
#define GOTO 280
#define BREAK 281
#define ELSE 282
#define SEMI 283
#define ARROW 284
#define IF 285
#define FI 286
#define DO 287
#define OD 288
#define FOR 289
#define SELECT 290
#define IN 291
#define SEP 292
#define DOTDOT 293
#define ATOMIC 294
#define NON_ATOMIC 295
#define D_STEP 296
#define UNLESS 297
#define TIMEOUT 298
#define NONPROGRESS 299
#define ACTIVE 300
#define PROCTYPE 301
#define D_PROCTYPE 302
#define HIDDEN 303
#define SHOW 304
#define ISLOCAL 305
#define PRIORITY 306
#define PROVIDED 307
#define FULL 308
#define EMPTY 309
#define NFULL 310
#define NEMPTY 311
#define CONST 312
#define TYPE 313
#define XU 314
#define NAME 315
#define UNAME 316
#define PNAME 317
#define INAME 318
#define STRING 319
#define CLAIM 320
#define TRACE 321
#define INIT 322
#define LTL 323
#define ASGN 324
#define SND 325
#define O_SND 326
#define RCV 327
#define R_RCV 328
#define IMPLIES 329
#define EQUIV 330
#define OR 331
#define AND 332
#define ALWAYS 333
#define EVENTUALLY 334
#define UNTIL 335
#define WEAK_UNTIL 336
#define RELEASE 337
#define NEXT 338
#define EQ 339
#define NE 340
#define GT 341
#define LT 342
#define GE 343
#define LE 344
#define LSHIFT 345
#define RSHIFT 346
#define INCR 347
#define DECR 348
#define UMIN 349
#define NEG 350
#define DOT 351

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ASSERT = 3,                     /* ASSERT  */
  YYSYMBOL_PRINT = 4,                      /* PRINT  */
  YYSYMBOL_PRINTM = 5,                     /* PRINTM  */
  YYSYMBOL_PREPROC = 6,                    /* PREPROC  */
  YYSYMBOL_C_CODE = 7,                     /* C_CODE  */
  YYSYMBOL_C_DECL = 8,                     /* C_DECL  */
  YYSYMBOL_C_EXPR = 9,                     /* C_EXPR  */
  YYSYMBOL_C_STATE = 10,                   /* C_STATE  */
  YYSYMBOL_C_TRACK = 11,                   /* C_TRACK  */
  YYSYMBOL_RUN = 12,                       /* RUN  */
  YYSYMBOL_LEN = 13,                       /* LEN  */
  YYSYMBOL_ENABLED = 14,                   /* ENABLED  */
  YYSYMBOL_SET_P = 15,                     /* SET_P  */
  YYSYMBOL_GET_P = 16,                     /* GET_P  */
  YYSYMBOL_EVAL = 17,                      /* EVAL  */
  YYSYMBOL_PC_VAL = 18,                    /* PC_VAL  */
  YYSYMBOL_TYPEDEF = 19,                   /* TYPEDEF  */
  YYSYMBOL_MTYPE = 20,                     /* MTYPE  */
  YYSYMBOL_INLINE = 21,                    /* INLINE  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_LABEL = 23,                     /* LABEL  */
  YYSYMBOL_OF = 24,                        /* OF  */
  YYSYMBOL_GOTO = 25,                      /* GOTO  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_SEMI = 28,                      /* SEMI  */
  YYSYMBOL_ARROW = 29,                     /* ARROW  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_FI = 31,                        /* FI  */
  YYSYMBOL_DO = 32,                        /* DO  */
  YYSYMBOL_OD = 33,                        /* OD  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_SELECT = 35,                    /* SELECT  */
  YYSYMBOL_IN = 36,                        /* IN  */
  YYSYMBOL_SEP = 37,                       /* SEP  */
  YYSYMBOL_DOTDOT = 38,                    /* DOTDOT  */
  YYSYMBOL_ATOMIC = 39,                    /* ATOMIC  */
  YYSYMBOL_NON_ATOMIC = 40,                /* NON_ATOMIC  */
  YYSYMBOL_D_STEP = 41,                    /* D_STEP  */
  YYSYMBOL_UNLESS = 42,                    /* UNLESS  */
  YYSYMBOL_TIMEOUT = 43,                   /* TIMEOUT  */
  YYSYMBOL_NONPROGRESS = 44,               /* NONPROGRESS  */
  YYSYMBOL_ACTIVE = 45,                    /* ACTIVE  */
  YYSYMBOL_PROCTYPE = 46,                  /* PROCTYPE  */
  YYSYMBOL_D_PROCTYPE = 47,                /* D_PROCTYPE  */
  YYSYMBOL_HIDDEN = 48,                    /* HIDDEN  */
  YYSYMBOL_SHOW = 49,                      /* SHOW  */
  YYSYMBOL_ISLOCAL = 50,                   /* ISLOCAL  */
  YYSYMBOL_PRIORITY = 51,                  /* PRIORITY  */
  YYSYMBOL_PROVIDED = 52,                  /* PROVIDED  */
  YYSYMBOL_FULL = 53,                      /* FULL  */
  YYSYMBOL_EMPTY = 54,                     /* EMPTY  */
  YYSYMBOL_NFULL = 55,                     /* NFULL  */
  YYSYMBOL_NEMPTY = 56,                    /* NEMPTY  */
  YYSYMBOL_CONST = 57,                     /* CONST  */
  YYSYMBOL_TYPE = 58,                      /* TYPE  */
  YYSYMBOL_XU = 59,                        /* XU  */
  YYSYMBOL_NAME = 60,                      /* NAME  */
  YYSYMBOL_UNAME = 61,                     /* UNAME  */
  YYSYMBOL_PNAME = 62,                     /* PNAME  */
  YYSYMBOL_INAME = 63,                     /* INAME  */
  YYSYMBOL_STRING = 64,                    /* STRING  */
  YYSYMBOL_CLAIM = 65,                     /* CLAIM  */
  YYSYMBOL_TRACE = 66,                     /* TRACE  */
  YYSYMBOL_INIT = 67,                      /* INIT  */
  YYSYMBOL_LTL = 68,                       /* LTL  */
  YYSYMBOL_ASGN = 69,                      /* ASGN  */
  YYSYMBOL_SND = 70,                       /* SND  */
  YYSYMBOL_O_SND = 71,                     /* O_SND  */
  YYSYMBOL_RCV = 72,                       /* RCV  */
  YYSYMBOL_R_RCV = 73,                     /* R_RCV  */
  YYSYMBOL_IMPLIES = 74,                   /* IMPLIES  */
  YYSYMBOL_EQUIV = 75,                     /* EQUIV  */
  YYSYMBOL_OR = 76,                        /* OR  */
  YYSYMBOL_AND = 77,                       /* AND  */
  YYSYMBOL_ALWAYS = 78,                    /* ALWAYS  */
  YYSYMBOL_EVENTUALLY = 79,                /* EVENTUALLY  */
  YYSYMBOL_UNTIL = 80,                     /* UNTIL  */
  YYSYMBOL_WEAK_UNTIL = 81,                /* WEAK_UNTIL  */
  YYSYMBOL_RELEASE = 82,                   /* RELEASE  */
  YYSYMBOL_NEXT = 83,                      /* NEXT  */
  YYSYMBOL_84_ = 84,                       /* '|'  */
  YYSYMBOL_85_ = 85,                       /* '^'  */
  YYSYMBOL_86_ = 86,                       /* '&'  */
  YYSYMBOL_EQ = 87,                        /* EQ  */
  YYSYMBOL_NE = 88,                        /* NE  */
  YYSYMBOL_GT = 89,                        /* GT  */
  YYSYMBOL_LT = 90,                        /* LT  */
  YYSYMBOL_GE = 91,                        /* GE  */
  YYSYMBOL_LE = 92,                        /* LE  */
  YYSYMBOL_LSHIFT = 93,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 94,                    /* RSHIFT  */
  YYSYMBOL_95_ = 95,                       /* '+'  */
  YYSYMBOL_96_ = 96,                       /* '-'  */
  YYSYMBOL_97_ = 97,                       /* '*'  */
  YYSYMBOL_98_ = 98,                       /* '/'  */
  YYSYMBOL_99_ = 99,                       /* '%'  */
  YYSYMBOL_INCR = 100,                     /* INCR  */
  YYSYMBOL_DECR = 101,                     /* DECR  */
  YYSYMBOL_102_ = 102,                     /* '~'  */
  YYSYMBOL_UMIN = 103,                     /* UMIN  */
  YYSYMBOL_NEG = 104,                      /* NEG  */
  YYSYMBOL_DOT = 105,                      /* DOT  */
  YYSYMBOL_106_ = 106,                     /* '('  */
  YYSYMBOL_107_ = 107,                     /* ')'  */
  YYSYMBOL_108_ = 108,                     /* '['  */
  YYSYMBOL_109_ = 109,                     /* ']'  */
  YYSYMBOL_110_ = 110,                     /* '{'  */
  YYSYMBOL_111_ = 111,                     /* '}'  */
  YYSYMBOL_112_ = 112,                     /* ':'  */
  YYSYMBOL_113_ = 113,                     /* ','  */
  YYSYMBOL_114_ = 114,                     /* '.'  */
  YYSYMBOL_115_ = 115,                     /* '@'  */
  YYSYMBOL_YYACCEPT = 116,                 /* $accept  */
  YYSYMBOL_program = 117,                  /* program  */
  YYSYMBOL_units = 118,                    /* units  */
  YYSYMBOL_unit = 119,                     /* unit  */
  YYSYMBOL_l_par = 120,                    /* l_par  */
  YYSYMBOL_r_par = 121,                    /* r_par  */
  YYSYMBOL_proc = 122,                     /* proc  */
  YYSYMBOL_123_1 = 123,                    /* $@1  */
  YYSYMBOL_124_2 = 124,                    /* $@2  */
  YYSYMBOL_proctype = 125,                 /* proctype  */
  YYSYMBOL_inst = 126,                     /* inst  */
  YYSYMBOL_init = 127,                     /* init  */
  YYSYMBOL_128_3 = 128,                    /* $@3  */
  YYSYMBOL_ltl = 129,                      /* ltl  */
  YYSYMBOL_130_4 = 130,                    /* $@4  */
  YYSYMBOL_ltl_body = 131,                 /* ltl_body  */
  YYSYMBOL_claim = 132,                    /* claim  */
  YYSYMBOL_133_5 = 133,                    /* $@5  */
  YYSYMBOL_optname = 134,                  /* optname  */
  YYSYMBOL_optname2 = 135,                 /* optname2  */
  YYSYMBOL_events = 136,                   /* events  */
  YYSYMBOL_137_6 = 137,                    /* $@6  */
  YYSYMBOL_utype = 138,                    /* utype  */
  YYSYMBOL_139_7 = 139,                    /* $@7  */
  YYSYMBOL_nm = 140,                       /* nm  */
  YYSYMBOL_ns = 141,                       /* ns  */
  YYSYMBOL_142_8 = 142,                    /* $@8  */
  YYSYMBOL_c_fcts = 143,                   /* c_fcts  */
  YYSYMBOL_cstate = 144,                   /* cstate  */
  YYSYMBOL_ccode = 145,                    /* ccode  */
  YYSYMBOL_cexpr = 146,                    /* cexpr  */
  YYSYMBOL_body = 147,                     /* body  */
  YYSYMBOL_148_9 = 148,                    /* $@9  */
  YYSYMBOL_149_10 = 149,                   /* $@10  */
  YYSYMBOL_sequence = 150,                 /* sequence  */
  YYSYMBOL_step = 151,                     /* step  */
  YYSYMBOL_152_11 = 152,                   /* $@11  */
  YYSYMBOL_vis = 153,                      /* vis  */
  YYSYMBOL_asgn = 154,                     /* asgn  */
  YYSYMBOL_osubt = 155,                    /* osubt  */
  YYSYMBOL_one_decl = 156,                 /* one_decl  */
  YYSYMBOL_decl_lst = 157,                 /* decl_lst  */
  YYSYMBOL_decl = 158,                     /* decl  */
  YYSYMBOL_vref_lst = 159,                 /* vref_lst  */
  YYSYMBOL_var_list = 160,                 /* var_list  */
  YYSYMBOL_c_list = 161,                   /* c_list  */
  YYSYMBOL_ivar = 162,                     /* ivar  */
  YYSYMBOL_ch_init = 163,                  /* ch_init  */
  YYSYMBOL_vardcl = 164,                   /* vardcl  */
  YYSYMBOL_varref = 165,                   /* varref  */
  YYSYMBOL_pfld = 166,                     /* pfld  */
  YYSYMBOL_167_12 = 167,                   /* $@12  */
  YYSYMBOL_cmpnd = 168,                    /* cmpnd  */
  YYSYMBOL_169_13 = 169,                   /* $@13  */
  YYSYMBOL_sfld = 170,                     /* sfld  */
  YYSYMBOL_stmnt = 171,                    /* stmnt  */
  YYSYMBOL_for_pre = 172,                  /* for_pre  */
  YYSYMBOL_173_14 = 173,                   /* $@14  */
  YYSYMBOL_for_post = 174,                 /* for_post  */
  YYSYMBOL_Special = 175,                  /* Special  */
  YYSYMBOL_176_15 = 176,                   /* $@15  */
  YYSYMBOL_177_16 = 177,                   /* $@16  */
  YYSYMBOL_178_17 = 178,                   /* $@17  */
  YYSYMBOL_179_18 = 179,                   /* @18  */
  YYSYMBOL_180_19 = 180,                   /* $@19  */
  YYSYMBOL_Stmnt = 181,                    /* Stmnt  */
  YYSYMBOL_182_20 = 182,                   /* $@20  */
  YYSYMBOL_183_21 = 183,                   /* $@21  */
  YYSYMBOL_184_22 = 184,                   /* $@22  */
  YYSYMBOL_185_23 = 185,                   /* $@23  */
  YYSYMBOL_186_24 = 186,                   /* $@24  */
  YYSYMBOL_187_25 = 187,                   /* $@25  */
  YYSYMBOL_188_26 = 188,                   /* $@26  */
  YYSYMBOL_189_27 = 189,                   /* $@27  */
  YYSYMBOL_190_28 = 190,                   /* $@28  */
  YYSYMBOL_191_29 = 191,                   /* $@29  */
  YYSYMBOL_192_30 = 192,                   /* $@30  */
  YYSYMBOL_193_31 = 193,                   /* $@31  */
  YYSYMBOL_options = 194,                  /* options  */
  YYSYMBOL_option = 195,                   /* option  */
  YYSYMBOL_196_32 = 196,                   /* $@32  */
  YYSYMBOL_OS = 197,                       /* OS  */
  YYSYMBOL_semi = 198,                     /* semi  */
  YYSYMBOL_MS = 199,                       /* MS  */
  YYSYMBOL_aname = 200,                    /* aname  */
  YYSYMBOL_const_expr = 201,               /* const_expr  */
  YYSYMBOL_expr = 202,                     /* expr  */
  YYSYMBOL_203_33 = 203,                   /* $@33  */
  YYSYMBOL_204_34 = 204,                   /* $@34  */
  YYSYMBOL_205_35 = 205,                   /* $@35  */
  YYSYMBOL_Opt_priority = 206,             /* Opt_priority  */
  YYSYMBOL_full_expr = 207,                /* full_expr  */
  YYSYMBOL_ltl_expr = 208,                 /* ltl_expr  */
  YYSYMBOL_Expr = 209,                     /* Expr  */
  YYSYMBOL_Probe = 210,                    /* Probe  */
  YYSYMBOL_Opt_enabler = 211,              /* Opt_enabler  */
  YYSYMBOL_oname = 212,                    /* oname  */
  YYSYMBOL_basetype = 213,                 /* basetype  */
  YYSYMBOL_typ_list = 214,                 /* typ_list  */
  YYSYMBOL_two_args = 215,                 /* two_args  */
  YYSYMBOL_args = 216,                     /* args  */
  YYSYMBOL_prargs = 217,                   /* prargs  */
  YYSYMBOL_margs = 218,                    /* margs  */
  YYSYMBOL_arg = 219,                      /* arg  */
  YYSYMBOL_rarg = 220,                     /* rarg  */
  YYSYMBOL_rargs = 221,                    /* rargs  */
  YYSYMBOL_nlst = 222                      /* nlst  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1926

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  280
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  533

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   351


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    99,    86,     2,
     106,   107,    97,    95,   113,    96,   114,    98,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   112,     2,
       2,     2,     2,     2,   115,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   108,     2,   109,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   110,    84,   111,   102,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    87,
      88,    89,    90,    91,    92,    93,    94,   100,   101,   103,
     104,   105
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   105,   106,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   122,   125,   130,   138,
     129,   166,   167,   170,   171,   172,   177,   191,   191,   201,
     201,   207,   208,   211,   211,   226,   232,   235,   241,   244,
     244,   261,   261,   274,   275,   281,   281,   287,   291,   294,
     298,   302,   306,   312,   322,   334,   352,   353,   352,   362,
     363,   366,   367,   368,   369,   370,   371,   371,   375,   378,
     379,   380,   381,   384,   385,   386,   389,   390,   393,   398,
     401,   413,   414,   418,   419,   422,   423,   426,   427,   430,
     431,   434,   447,   460,   487,   495,   510,   511,   519,   520,
     538,   541,   547,   547,   551,   551,   568,   569,   572,   573,
     578,   578,   585,   586,   588,   588,   593,   593,   599,   599,
     604,   604,   608,   612,   618,   618,   625,   628,   636,   644,
     654,   659,   664,   672,   680,   681,   681,   683,   684,   685,
     686,   687,   687,   693,   693,   699,   699,   705,   705,   712,
     713,   715,   715,   722,   722,   732,   732,   738,   739,   738,
     745,   746,   745,   751,   754,   755,   758,   758,   766,   767,
     770,   771,   774,   775,   778,   779,   782,   783,   784,   785,
     786,   787,   788,   794,   802,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   825,   830,   830,   840,
     841,   842,   843,   843,   847,   847,   852,   853,   854,   859,
     860,   863,   866,   868,   870,   871,   872,   875,   876,   879,
     880,   883,   884,   885,   888,   891,   892,   893,   894,   898,
     899,   900,   901,   902,   903,   904,   905,   908,   909,   910,
     911,   914,   915,   922,   927,   928,   931,   941,   944,   947,
     948,   951,   954,   955,   958,   959,   962,   963,   970,   975,
     982,   984,   986,   991,   996,  1001,  1006,  1011,  1014,  1016,
    1019
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ASSERT", "PRINT",
  "PRINTM", "PREPROC", "C_CODE", "C_DECL", "C_EXPR", "C_STATE", "C_TRACK",
  "RUN", "LEN", "ENABLED", "SET_P", "GET_P", "EVAL", "PC_VAL", "TYPEDEF",
  "MTYPE", "INLINE", "RETURN", "LABEL", "OF", "GOTO", "BREAK", "ELSE",
  "SEMI", "ARROW", "IF", "FI", "DO", "OD", "FOR", "SELECT", "IN", "SEP",
  "DOTDOT", "ATOMIC", "NON_ATOMIC", "D_STEP", "UNLESS", "TIMEOUT",
  "NONPROGRESS", "ACTIVE", "PROCTYPE", "D_PROCTYPE", "HIDDEN", "SHOW",
  "ISLOCAL", "PRIORITY", "PROVIDED", "FULL", "EMPTY", "NFULL", "NEMPTY",
  "CONST", "TYPE", "XU", "NAME", "UNAME", "PNAME", "INAME", "STRING",
  "CLAIM", "TRACE", "INIT", "LTL", "ASGN", "SND", "O_SND", "RCV", "R_RCV",
  "IMPLIES", "EQUIV", "OR", "AND", "ALWAYS", "EVENTUALLY", "UNTIL",
  "WEAK_UNTIL", "RELEASE", "NEXT", "'|'", "'^'", "'&'", "EQ", "NE", "GT",
  "LT", "GE", "LE", "LSHIFT", "RSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "INCR", "DECR", "'~'", "UMIN", "NEG", "DOT", "'('", "')'", "'['", "']'",
  "'{'", "'}'", "':'", "','", "'.'", "'@'", "$accept", "program", "units",
  "unit", "l_par", "r_par", "proc", "$@1", "$@2", "proctype", "inst",
  "init", "$@3", "ltl", "$@4", "ltl_body", "claim", "$@5", "optname",
  "optname2", "events", "$@6", "utype", "$@7", "nm", "ns", "$@8", "c_fcts",
  "cstate", "ccode", "cexpr", "body", "$@9", "$@10", "sequence", "step",
  "$@11", "vis", "asgn", "osubt", "one_decl", "decl_lst", "decl",
  "vref_lst", "var_list", "c_list", "ivar", "ch_init", "vardcl", "varref",
  "pfld", "$@12", "cmpnd", "$@13", "sfld", "stmnt", "for_pre", "$@14",
  "for_post", "Special", "$@15", "$@16", "$@17", "@18", "$@19", "Stmnt",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "$@28",
  "$@29", "$@30", "$@31", "options", "option", "$@32", "OS", "semi", "MS",
  "aname", "const_expr", "expr", "$@33", "$@34", "$@35", "Opt_priority",
  "full_expr", "ltl_expr", "Expr", "Probe", "Opt_enabler", "oname",
  "basetype", "typ_list", "two_args", "args", "prargs", "margs", "arg",
  "rarg", "rargs", "nlst", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-461)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-215)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1409,  -461,  -461,  -461,    27,    70,    83,   106,  -461,  -461,
      43,  -461,  -461,  -461,   111,  -461,  -461,   124,   186,   456,
    -461,  -461,   -11,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,   109,  -461,  -461,   126,   138,    97,  -461,  -461,
     104,    56,  -461,  -461,   114,   174,  -461,  -461,  -461,  -461,
    -461,  -461,   167,   -16,   170,   183,   185,  -461,  -461,  -461,
    -461,   129,   -28,   -28,   179,   114,  -461,  -461,   195,   114,
       2,  -461,  -461,   193,   145,   170,   -22,  -461,   144,   191,
    -461,  -461,   156,    85,  -461,  -461,   301,   -28,   -28,   -28,
     -28,   -28,  -461,  -461,   970,  -461,  -461,  -461,  1285,  -461,
     104,   194,   202,  -461,    93,   209,   170,  1180,   244,   168,
    -461,    99,   104,   104,   104,   104,  -461,  -461,  -461,   173,
     -87,    85,    85,    85,    85,    85,    85,    85,  -461,    12,
    -461,  -461,  1490,  -461,   204,  -461,  -461,  -461,   121,   121,
    -461,  -461,  -461,   251,  1285,   104,   104,   104,  1285,   249,
    -461,  -461,   276,  -461,   104,   104,   207,   208,   104,   104,
     104,   104,   256,    15,  -461,  -461,  1285,  -461,   149,  -461,
    -461,   164,   272,   -20,  -461,  -461,  1659,  -461,   117,  -461,
     149,    17,  -461,  -461,   -42,   216,   206,  -461,  -461,   -28,
     269,  -461,  1685,   156,  -461,  -461,  -461,  -461,   256,    85,
      85,    85,   219,    85,   256,   271,  -461,  -461,  -461,  -461,
    -461,  -461,   478,  -461,  -461,   215,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
    -461,  -461,   290,   116,    85,  -461,  -461,  -461,   302,   276,
     276,  -461,   256,  -461,  -461,   256,   256,   256,   256,  -461,
     222,   632,   104,   970,  1308,   -14,  -461,     0,   870,  1252,
    -461,  -461,    -8,    49,  -461,  -461,  -461,   256,    85,  1285,
    1285,  1285,  1285,   247,  -461,  -461,   204,  -461,  -461,  -461,
    -461,  -461,   225,   246,   250,  -461,   104,   204,  1631,  1631,
    1631,    85,  1579,  -461,  -461,    85,  -461,   255,   257,   256,
    -461,  1761,  1761,  1784,  1827,   254,   254,   254,   401,   509,
     531,   765,   765,   348,   348,   348,   348,   318,   318,   192,
     192,  -461,  -461,  -461,  -461,  -461,   204,   204,  1520,   204,
     970,  -461,  -461,   331,   256,   258,   970,   970,   204,   204,
     204,   204,   256,  -461,  -461,    46,  -461,  -461,    85,   149,
    -461,   263,  -461,  -461,  -461,  -461,    85,    85,   155,   278,
     155,   279,  1070,   204,  1404,  1807,   289,  1827,  -461,  1711,
     289,  1737,  -461,  -461,  -461,   352,   269,  -461,    85,  -461,
    -461,  -461,  -461,  1605,    67,  1550,   155,   155,  -461,   264,
    -461,  -461,    85,  -461,   149,  -461,  -461,    85,   149,   149,
    -461,  -461,  -461,  -461,  -461,   770,   204,   267,  -461,   104,
    1456,  -461,  -461,  -461,   104,  -461,   324,   155,  -461,   -61,
    -461,   155,  -461,   155,  -461,  -461,    85,   174,   273,  -461,
     204,  -461,   256,   322,    85,   281,   283,    85,   204,  1685,
    -461,  1430,   274,   277,  -461,  -461,    85,    85,    85,  -461,
     204,   155,   155,   314,   315,   -15,  1631,   353,    18,   174,
    -461,  -461,  1631,  -461,  -461,  -461,  -461,    85,  -461,  -461,
    1147,   204,   204,  1631,  -461,  -461,   204,  -461,  -461,   297,
     970,  -461,  -461,    11,   114,  -461,   298,  -461,   296,   300,
    -461,  -461,  1631,   198,  -461,  -461,  -461,  -461,  -461,   970,
     149,   -15,  -461,  1285,  -461,   363,  -461,    18,  -461,  -461,
     317,  1147,   149,   340,  -461,   204,  -461,  -461,  -461,   341,
    -461,  -461,  -461
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    15,    53,    54,     0,     0,     0,     0,   170,   171,
      24,    70,    71,    72,    35,    39,    27,    37,     0,     0,
       3,     5,     0,     6,     8,     7,     9,    11,    13,    12,
      48,    47,     0,    10,    14,     0,     0,     0,    43,    44,
       0,     0,    36,    33,     0,   227,    38,    29,     1,     4,
      21,    22,     0,    73,     0,    49,    50,    41,    16,    45,
     176,     0,     0,     0,     0,     0,    56,    40,     0,     0,
       0,    18,    75,     0,     0,     0,    96,    79,    87,    91,
      51,    52,    69,   262,    26,   177,     0,     0,     0,     0,
       0,     0,    25,    34,     0,   228,    28,    32,     0,    30,
       0,    77,     0,    78,     0,     0,     0,     0,    81,     0,
      55,     0,     0,     0,     0,     0,   219,   220,   218,   101,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   216,
     104,   100,   268,   226,     0,   263,    17,   178,   179,   180,
     181,   182,   183,    68,     0,     0,     0,     0,     0,     0,
     126,   150,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   157,   155,     0,   140,   168,    59,
      61,   216,    65,     0,   108,   109,   229,   149,   230,   239,
     168,    69,    74,   278,     0,     0,     0,    97,    88,     0,
       0,    94,    93,    69,    42,   174,   175,   207,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   237,   238,   236,
     204,   203,     0,   212,   214,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,   139,     0,     0,     0,   163,   127,   166,     0,   164,
       0,   110,     0,   151,   153,     0,     0,     0,     0,    62,
      85,     0,     0,     0,     0,     0,    57,   172,     0,     0,
     116,   147,   114,   141,   132,   133,    66,     0,     0,     0,
       0,     0,     0,     0,   169,    84,     0,   279,    80,   280,
      99,    98,     0,    89,     0,    82,     0,     0,     0,     0,
       0,     0,     0,   225,   224,     0,   184,     0,     0,     0,
     105,   234,   235,   200,   199,   231,   233,   232,   192,   191,
     190,   197,   198,   193,   194,   195,   196,   201,   202,   185,
     186,   187,   188,   189,   269,   135,     0,     0,     0,     0,
       0,   123,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,    64,   101,    63,   128,   262,   168,
     240,     0,    60,   173,   160,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   246,   199,   243,   245,
     244,   242,   241,    31,    19,     0,     0,    92,   262,   209,
     210,   211,   221,     0,     0,     0,     0,     0,   107,   264,
     138,   137,     0,   134,   168,   125,   111,     0,   168,   168,
     247,   249,   248,   250,    86,     0,     0,     0,    58,     0,
     268,   117,   266,   148,     0,   272,     0,     0,   270,   274,
     115,     0,   142,     0,    67,   120,     0,   227,     0,    90,
       0,   103,     0,     0,     0,     0,     0,     0,     0,   261,
     167,     0,     0,     0,   158,   156,   262,     0,     0,   273,
       0,     0,     0,     0,     0,     0,     0,   251,     0,   227,
     223,   222,     0,   213,   215,   265,   136,     0,   152,   154,
       0,     0,     0,     0,   277,   275,     0,   144,   146,     0,
       0,   121,   118,     0,     0,   258,   254,   257,   259,     0,
     208,   206,     0,   216,   159,   161,   267,   271,   276,     0,
     168,     0,   253,     0,    20,     0,   256,     0,    95,   122,
     143,     0,   168,     0,   119,     0,   255,   260,   162,     0,
     112,   252,   113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -461,  -461,  -461,   407,   -40,   -54,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,   137,
    -461,   -63,  -461,  -461,  -259,   187,  -461,  -461,  -461,  -461,
       7,   -33,  -461,   102,   -29,    72,  -461,  -461,  -461,   -60,
    -194,  -461,   150,  -461,  -461,  -250,  -461,  -461,   -51,  -461,
    -461,  -461,  -461,  -461,  -461,  -460,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,   -36,  -461,
    -461,  -150,     5,  -461,  -461,   -48,   312,  -461,  -461,  -461,
    -399,   -89,  -461,  -149,  -461,  -461,  -461,  -461,   -55,  -461,
    -331,  -461,    98,  -231,  -461,  -287,  -461
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    20,   127,   306,    21,   100,   437,    52,
      22,    23,    45,    24,    70,    99,    25,    65,    43,    47,
      26,    44,    27,    82,    40,    28,    83,    29,    30,   167,
     128,    67,    94,   361,   168,   169,   372,    32,    74,    75,
     170,   109,   286,   259,    77,   294,    78,   191,    79,   129,
     130,   202,   131,   215,   310,   172,   173,   344,   491,   174,
     368,   366,   511,   465,   250,   175,   399,   370,   369,   371,
     367,   346,   347,   263,   262,   480,   419,   521,   248,   249,
     340,   266,   267,   268,   197,    64,   176,   296,   307,   308,
      69,   177,   133,   178,   179,   494,   516,   498,   499,   339,
     134,   448,   421,   135,   429,   430,   184
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    63,    93,    97,   359,    34,    96,    33,   334,   180,
     303,   357,   512,   489,    85,    86,   277,   265,   287,   495,
     504,   203,    63,    63,    34,   204,    33,   416,   205,    60,
     283,  -169,   137,  -169,   171,    50,    51,  -169,   467,   138,
     139,   140,   141,   142,   -76,    58,   103,    63,    63,    63,
      63,    63,   461,    72,   166,   241,   186,   440,   166,   245,
     181,   528,   281,   282,    63,    11,    12,    13,    62,   288,
     500,   289,   198,   199,   200,   201,   496,   188,    58,   497,
     240,   404,  -143,   432,   213,   214,   104,   408,   409,   108,
     105,    35,   278,   136,   110,   490,    73,   111,   112,   113,
    -212,   114,   260,   115,   166,   242,   243,   244,   166,   445,
     446,  -169,    98,    60,   251,   252,    61,    58,   255,   256,
     257,   258,   434,  -102,   -83,   481,   166,   261,   116,   117,
     376,   378,   380,   382,    36,   422,   422,    31,   297,  -145,
     460,   292,   118,    37,   463,   119,   464,   120,   285,    63,
      60,    41,    62,   185,  -102,   121,    31,  -214,   415,   195,
     295,   196,    58,   122,   123,   357,    38,    53,   124,    39,
      54,    42,   424,   336,   485,   486,   119,     8,     9,   442,
     365,   125,   443,   337,    46,   284,    48,   126,   108,    62,
      55,    58,   345,   281,   282,   348,   349,   350,   351,    58,
     108,   171,    56,   171,    11,    12,    13,    57,   171,   417,
      58,   360,   425,   342,   343,   119,   475,   373,    89,    90,
      91,   166,   358,   166,    66,    68,   482,    71,   166,   166,
      76,   510,   384,   269,   270,   271,   272,   273,    84,   166,
     166,   166,   166,   389,   390,   391,   392,    80,   470,    81,
     522,   426,    95,   101,   450,   102,   388,   106,   452,   453,
     107,    58,   183,   182,   274,   275,   187,   269,   356,   271,
     520,   273,   193,   363,    87,    88,    89,    90,    91,   194,
     171,  -102,   400,   401,   406,   403,   171,   171,    92,   236,
     237,   238,   260,  -130,   410,   411,   412,   413,   274,   275,
     166,    87,    88,    89,    90,    91,   166,   166,   428,   246,
     428,   136,   171,   247,   276,   291,   119,   253,   254,   435,
      87,    88,    89,    90,    91,   290,   293,   301,   427,   309,
     427,   304,   166,   341,   385,   352,   428,   428,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   335,   171,   427,   427,   383,   386,
     523,   387,   454,   396,   405,   397,   282,   428,   431,   433,
     407,   428,   529,   428,   418,   166,   438,   447,   455,   456,
     457,   459,   471,   468,   458,   478,   469,   427,   479,   462,
     473,   427,   474,   427,   476,   132,    87,    88,    89,    90,
      91,   428,   428,   487,   488,   493,   484,   509,   136,   517,
     515,   518,   492,   234,   235,   236,   237,   238,   501,   192,
     503,   427,   427,   526,   525,  -212,    49,   505,   506,   507,
     171,   514,   508,   206,   207,   208,   209,   210,   211,   212,
     166,   232,   233,   234,   235,   236,   237,   238,   519,   171,
     166,   530,   532,   513,   414,   362,    -2,     1,   439,   398,
     524,   503,   527,     2,     3,   423,     4,     5,     0,   166,
       0,   531,     0,   166,     0,     6,     0,     7,   264,     0,
       0,   166,     0,     0,     8,     9,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,    10,   -23,   -23,    11,    12,    13,   305,     0,     0,
       0,   298,   299,   300,   -69,   302,     0,   -69,     0,     0,
       0,    14,    15,    16,    17,     0,     0,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   132,   216,   217,   218,   219,   338,     0,   220,   221,
     222,     0,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,     0,
       0,     0,     0,     0,     0,   136,     0,     0,     0,     0,
     374,   375,   377,   379,   381,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,     0,
       0,     0,     0,   393,     0,     0,     0,   395,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,     0,     0,   353,     0,   144,   145,   146,     0,     2,
       3,   110,     0,     0,   111,   112,   113,   147,   114,     0,
     115,     0,     0,     0,   148,     0,     0,   149,   150,   151,
    -129,  -129,   152,  -129,   153,  -129,   154,   155,     0,  -129,
     132,   156,     0,   157,  -129,   116,   117,     0,   420,   420,
      11,    12,    13,     0,     0,   158,   159,   160,   161,   118,
     -69,   354,   355,   -69,   120,   164,     0,     0,     0,     0,
     132,     0,   121,     0,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,   449,   124,     0,     0,     0,   451,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,   126,     0,     0,     0,    58,     0,
       0,     0,   165,  -129,     0,     0,     0,     0,   466,     0,
       0,     0,     0,     0,     0,     0,   472,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   132,
     483,   353,     0,   144,   145,   146,     0,     2,     3,   110,
       0,     0,   111,   112,   113,   147,   114,     0,   115,   502,
       0,     0,   148,     0,     0,   149,   150,   151,  -129,  -129,
     152,  -129,   153,  -129,   154,   155,     0,  -129,     0,   156,
       0,   157,  -129,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,   158,   159,   160,   161,   118,     0,     0,
     355,     0,   120,   164,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,     0,   124,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,     0,   125,     0,     0,     0,
       0,   143,   126,   144,   145,   146,    58,     2,     3,   110,
     165,  -129,   111,   112,   113,   147,   114,     0,   115,     0,
       0,     0,   148,     0,     0,   149,   150,   151,     8,     9,
     152,     0,   153,     0,   154,   155,     0,     0,     0,   156,
       0,   157,     0,   116,   117,     0,     0,     0,    11,    12,
      13,     0,     0,   158,   159,   160,   161,   118,   -69,   162,
     163,   -69,   120,   164,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,   143,   126,   144,   145,   146,    58,     2,     3,   110,
     165,     0,   111,   112,   113,   147,   114,     0,   115,     0,
       0,     0,   148,     0,     0,   149,   150,   151,     0,     0,
     152,     0,   153,     0,   154,   155,     0,     0,     0,   156,
       0,   157,     0,   116,   117,     0,     0,     0,    11,    12,
      13,     0,     0,   158,   159,   160,   161,   118,   -69,   162,
     163,   -69,   120,   164,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,   353,   126,   144,   145,   146,    58,     2,     3,   110,
     165,     0,   111,   112,   113,   147,   114,     0,   115,     0,
       0,     0,   148,     0,     0,   149,   150,   151,     0,     0,
     152,     0,   153,     0,   154,   155,     0,     0,     0,   156,
       0,   157,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,   158,   159,   160,   161,   118,     0,     0,
     355,     0,   120,   164,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     144,   145,   146,   124,     2,     3,   110,     0,     0,   111,
     112,   113,   147,   114,     0,   115,   125,     0,     0,   148,
       0,     0,   126,     0,   151,     0,    58,     0,     0,     0,
     165,     0,     0,     0,     0,     0,   156,     0,   157,   110,
     116,   117,   111,   112,   113,     0,   114,     0,   115,     0,
     158,   159,   160,   161,   118,     0,     0,   119,     0,   120,
     164,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,   116,   117,   122,   123,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,     0,   120,   125,     0,     0,     0,     0,     0,   126,
     121,     0,     0,    58,     0,     0,     0,   165,   122,   123,
       0,   110,     0,   124,   111,   112,   113,     0,   114,     0,
     115,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,   126,     0,     0,     0,    58,     0,   189,     0,
     190,     0,     0,     0,   110,   116,   117,   111,   112,   113,
       0,   114,     0,   115,     0,   158,   159,   160,   161,   118,
       0,     0,   119,     0,   120,   364,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,   116,   117,
     122,   123,     0,     0,     0,   124,     0,   305,   158,   159,
     160,   161,   118,     0,     0,   119,     0,   120,   125,     0,
       0,     0,     0,     0,   126,   121,     0,     0,    58,     0,
       0,     0,     0,   122,   123,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   216,   217,   279,   280,     0,   126,   220,   221,
     222,    58,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,     0,
       1,     0,     0,     0,     0,   136,     2,     3,     0,     4,
       5,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     8,     9,     0,
       0,     0,   436,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,   -23,   -23,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,   -69,   477,     0,
     -69,     0,     0,     0,    14,    15,    16,    17,   216,   217,
     218,   219,     0,     0,   220,   221,   222,     0,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   216,   217,   218,   219,     0,     0,
     220,   221,   222,     0,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     216,   217,   218,   219,     0,     0,   220,   221,   222,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,     0,     0,     0,     0,
       0,     0,    58,     0,   216,   217,   218,   219,     0,   239,
     220,   221,   222,     0,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,     0,     0,   216,   217,   218,   219,     0,     0,
     220,   221,   222,   239,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,     0,     0,   216,   217,   218,   219,     0,     0,
     220,   221,   222,   402,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,     0,   216,   217,   218,   219,     0,     0,   220,
     221,   222,   444,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   216,
     217,   218,   219,     0,     0,   220,   221,   222,   394,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   216,   217,   218,   219,     0,
       0,   220,   221,   222,   441,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,     0,     0,   216,   217,   279,   280,     0,   136,   220,
     221,   222,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   216,
     217,   218,   219,     0,     0,   220,   221,   222,     0,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   216,   217,     0,   280,     0,
       0,   220,   221,   222,     0,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   216,   217,     0,     0,     0,     0,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   218,   219,     0,
       0,   220,   221,   222,     0,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   219,     0,     0,   220,   221,   222,     0,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   280,     0,     0,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238
};

static const yytype_int16 yycheck[] =
{
      40,    41,    65,     1,   263,     0,    69,     0,   239,    98,
     204,   261,     1,    28,    62,    63,    36,   166,    60,     1,
     480,   108,    62,    63,    19,   112,    19,   358,   115,    57,
     180,    31,    86,    33,    94,    46,    47,    37,   437,    87,
      88,    89,    90,    91,    60,   106,    75,    87,    88,    89,
      90,    91,   113,    69,    94,   144,   104,   388,    98,   148,
     100,   521,    76,    77,   104,    48,    49,    50,    96,   111,
     469,   113,   112,   113,   114,   115,    58,   106,   106,    61,
     134,   340,    90,   370,    72,    73,   108,   346,   347,    82,
     112,    64,   112,   107,     9,   110,   112,    12,    13,    14,
     108,    16,   162,    18,   144,   145,   146,   147,   148,   396,
     397,   111,   110,    57,   154,   155,    60,   106,   158,   159,
     160,   161,   372,   108,   107,   456,   166,   112,    43,    44,
     279,   280,   281,   282,    64,   366,   367,     0,   198,    90,
     427,   189,    57,    60,   431,    60,   433,    62,   181,   189,
      57,   108,    96,    60,   108,    70,    19,   108,   112,    60,
     193,    62,   106,    78,    79,   415,    60,    58,    83,    63,
      61,    60,    17,    57,   461,   462,    60,    28,    29,   112,
     269,    96,   115,   243,    60,   180,     0,   102,   181,    96,
      64,   106,   252,    76,    77,   255,   256,   257,   258,   106,
     193,   261,    64,   263,    48,    49,    50,   110,   268,   359,
     106,   265,    57,   249,   250,    60,   447,   277,    97,    98,
      99,   261,   262,   263,   110,    51,   457,    60,   268,   269,
      60,   490,   286,    69,    70,    71,    72,    73,   109,   279,
     280,   281,   282,   297,   298,   299,   300,    64,   442,    64,
     509,    96,    57,    60,   404,   110,   296,   113,   408,   409,
      69,   106,    60,    69,   100,   101,    57,    69,   261,    71,
      72,    73,    28,   268,    95,    96,    97,    98,    99,   111,
     340,   108,   336,   337,   344,   339,   346,   347,   109,    97,
      98,    99,   352,    42,   348,   349,   350,   351,   100,   101,
     340,    95,    96,    97,    98,    99,   346,   347,   368,    60,
     370,   107,   372,    37,    42,   109,    60,   110,   110,   373,
      95,    96,    97,    98,    99,   109,    57,   108,   368,   114,
     370,    60,   372,    31,   109,   113,   396,   397,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    64,   415,   396,   397,   111,   113,
     510,   111,   416,   108,    33,   108,    77,   427,    90,    90,
     112,   431,   522,   433,   111,   415,    24,   113,   111,   419,
     420,    57,    60,   110,   424,   111,   440,   427,   111,   429,
     109,   431,   109,   433,   448,    83,    95,    96,    97,    98,
      99,   461,   462,    89,    89,    52,   460,   110,   107,   113,
     112,   111,   466,    95,    96,    97,    98,    99,   472,   107,
     480,   461,   462,    60,   513,   108,    19,   481,   482,   483,
     490,   494,   486,   121,   122,   123,   124,   125,   126,   127,
     480,    93,    94,    95,    96,    97,    98,    99,   502,   509,
     490,   111,   111,   493,   352,   268,     0,     1,   386,   309,
     511,   521,   517,     7,     8,   367,    10,    11,    -1,   509,
      -1,   525,    -1,   513,    -1,    19,    -1,    21,   166,    -1,
      -1,   521,    -1,    -1,    28,    29,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    45,    46,    47,    48,    49,    50,    29,    -1,    -1,
      -1,   199,   200,   201,    58,   203,    -1,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,    74,    75,    76,    77,   244,    -1,    80,    81,
      82,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
     278,   279,   280,   281,   282,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   301,    -1,    -1,    -1,   305,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
     358,    39,    -1,    41,    42,    43,    44,    -1,   366,   367,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
     388,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    -1,    -1,   402,    83,    -1,    -1,    -1,   407,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,   436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,   447,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   456,   457,
     458,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    -1,    18,   477,
      -1,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    -1,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    -1,    -1,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    96,    -1,    -1,    -1,
      -1,     1,   102,     3,     4,     5,   106,     7,     8,     9,
     110,   111,    12,    13,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,     1,   102,     3,     4,     5,   106,     7,     8,     9,
     110,    -1,    12,    13,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    26,    27,    -1,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,     1,   102,     3,     4,     5,   106,     7,     8,     9,
     110,    -1,    12,    13,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    26,    27,    -1,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    -1,    -1,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
       3,     4,     5,    83,     7,     8,     9,    -1,    -1,    12,
      13,    14,    15,    16,    -1,    18,    96,    -1,    -1,    22,
      -1,    -1,   102,    -1,    27,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,     9,
      43,    44,    12,    13,    14,    -1,    16,    -1,    18,    -1,
      53,    54,    55,    56,    57,    -1,    -1,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    43,    44,    78,    79,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,    62,    96,    -1,    -1,    -1,    -1,    -1,   102,
      70,    -1,    -1,   106,    -1,    -1,    -1,   110,    78,    79,
      -1,     9,    -1,    83,    12,    13,    14,    -1,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,    -1,
     110,    -1,    -1,    -1,     9,    43,    44,    12,    13,    14,
      -1,    16,    -1,    18,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    43,    44,
      78,    79,    -1,    -1,    -1,    83,    -1,    29,    53,    54,
      55,    56,    57,    -1,    -1,    60,    -1,    62,    96,    -1,
      -1,    -1,    -1,    -1,   102,    70,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    74,    75,    76,    77,    -1,   102,    80,    81,
      82,   106,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
       1,    -1,    -1,    -1,    -1,   107,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    38,    -1,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    74,    75,
      76,    77,    -1,    -1,    80,    81,    82,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    74,    75,    76,    77,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      74,    75,    76,    77,    -1,    -1,    80,    81,    82,    -1,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    74,    75,    76,    77,    -1,   113,
      80,    81,    82,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    81,    82,   113,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    81,    82,   113,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    80,
      81,    82,   112,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    74,
      75,    76,    77,    -1,    -1,    80,    81,    82,   109,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    74,    75,    76,    77,    -1,
      -1,    80,    81,    82,   109,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,    74,    75,    76,    77,    -1,   107,    80,
      81,    82,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    74,
      75,    76,    77,    -1,    -1,    80,    81,    82,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    74,    75,    -1,    77,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    74,    75,    -1,    -1,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    76,    77,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    77,    -1,    -1,    80,    81,    82,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    77,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    80,    81,    82,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,     8,    10,    11,    19,    21,    28,    29,
      45,    48,    49,    50,    65,    66,    67,    68,   117,   118,
     119,   122,   126,   127,   129,   132,   136,   138,   141,   143,
     144,   145,   153,   156,   198,    64,    64,    60,    60,    63,
     140,   108,    60,   134,   137,   128,    60,   135,     0,   119,
      46,    47,   125,    58,    61,    64,    64,   110,   106,   120,
      57,    60,    96,   120,   201,   133,   110,   147,    51,   206,
     130,    60,    69,   112,   154,   155,    60,   160,   162,   164,
      64,    64,   139,   142,   109,   201,   201,    95,    96,    97,
      98,    99,   109,   147,   148,    57,   147,     1,   110,   131,
     123,    60,   110,   160,   108,   112,   113,    69,   156,   157,
       9,    12,    13,    14,    16,    18,    43,    44,    57,    60,
      62,    70,    78,    79,    83,    96,   102,   120,   146,   165,
     166,   168,   202,   208,   216,   219,   107,   121,   201,   201,
     201,   201,   201,     1,     3,     4,     5,    15,    22,    25,
      26,    27,    30,    32,    34,    35,    39,    41,    53,    54,
      55,    56,    59,    60,    63,   110,   120,   145,   150,   151,
     156,   165,   171,   172,   175,   181,   202,   207,   209,   210,
     207,   120,    69,    60,   222,    60,   201,    57,   160,   108,
     110,   163,   202,    28,   111,    60,    62,   200,   120,   120,
     120,   120,   167,   108,   112,   115,   202,   202,   202,   202,
     202,   202,   202,    72,    73,   169,    74,    75,    76,    77,
      80,    81,    82,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   113,
     121,   207,   120,   120,   120,   207,    60,    37,   194,   195,
     180,   120,   120,   110,   110,   120,   120,   120,   120,   159,
     165,   112,   190,   189,   202,   209,   197,   198,   199,    69,
      70,    71,    72,    73,   100,   101,    42,    36,   112,    76,
      77,    76,    77,   197,   198,   157,   158,    60,   111,   113,
     109,   109,   201,    57,   161,   157,   203,   165,   202,   202,
     202,   108,   202,   166,    60,    29,   121,   204,   205,   114,
     170,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   219,    64,    57,   165,   202,   215,
     196,    31,   194,   194,   173,   165,   187,   188,   165,   165,
     165,   165,   113,     1,    59,    60,   156,   171,   120,   150,
     121,   149,   151,   198,    63,   207,   177,   186,   176,   184,
     183,   185,   152,   165,   202,   202,   209,   202,   209,   202,
     209,   202,   209,   111,   121,   109,   113,   111,   120,   121,
     121,   121,   121,   202,   109,   202,   108,   108,   168,   182,
     121,   121,   113,   121,   150,    33,   165,   112,   150,   150,
     121,   121,   121,   121,   159,   112,   216,   197,   111,   192,
     202,   218,   219,   218,    17,    57,    96,   120,   165,   220,
     221,    90,   221,    90,   171,   121,    38,   124,    24,   161,
     216,   109,   112,   115,   112,   221,   221,   113,   217,   202,
     197,   202,   197,   197,   121,   111,   120,   120,   120,    57,
     221,   113,   120,   221,   221,   179,   202,   206,   110,   121,
     166,    60,   202,   109,   109,   219,   121,    38,   111,   111,
     191,   216,   219,   202,   121,   221,   221,    89,    89,    28,
     110,   174,   121,    52,   211,     1,    58,    61,   213,   214,
     206,   121,   202,   165,   181,   121,   121,   121,   121,   110,
     150,   178,     1,   120,   147,   112,   212,   113,   111,   121,
      72,   193,   150,   197,   174,   207,    60,   214,   181,   197,
     111,   121,   111
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   120,   121,   123,   124,
     122,   125,   125,   126,   126,   126,   126,   128,   127,   130,
     129,   131,   131,   133,   132,   134,   134,   135,   135,   137,
     136,   139,   138,   140,   140,   142,   141,   143,   143,   144,
     144,   144,   144,   145,   145,   146,   148,   149,   147,   150,
     150,   151,   151,   151,   151,   151,   152,   151,   151,   153,
     153,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   162,   162,   163,   164,   164,   164,   164,
     165,   166,   167,   166,   169,   168,   170,   170,   171,   171,
     173,   172,   174,   174,   176,   175,   177,   175,   178,   175,
     179,   175,   175,   175,   180,   175,   175,   175,   175,   175,
     175,   181,   181,   181,   181,   182,   181,   181,   181,   181,
     181,   183,   181,   184,   181,   185,   181,   186,   181,   181,
     181,   187,   181,   188,   181,   189,   181,   190,   191,   181,
     192,   193,   181,   181,   194,   194,   196,   195,   197,   197,
     198,   198,   199,   199,   200,   200,   201,   201,   201,   201,
     201,   201,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   203,   202,   202,
     202,   202,   204,   202,   205,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   206,   206,   207,
     207,   208,   208,   208,   208,   208,   208,   208,   208,   209,
     209,   209,   209,   209,   209,   209,   209,   210,   210,   210,
     210,   211,   211,   211,   212,   212,   213,   213,   213,   214,
     214,   215,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   220,   220,   221,   221,   221,   221,   222,   222,
     222
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
      11,     1,     1,     0,     1,     4,     4,     0,     4,     0,
       4,     4,     1,     0,     4,     0,     1,     0,     1,     0,
       3,     0,     6,     1,     1,     0,     6,     1,     1,     3,
       3,     4,     4,     1,     1,     1,     0,     0,     6,     1,
       3,     1,     2,     3,     3,     1,     0,     4,     1,     0,
       1,     1,     1,     0,     3,     1,     0,     2,     4,     3,
       6,     1,     3,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     5,     3,     3,     7,     1,     3,     4,     4,
       1,     1,     0,     5,     0,     3,     0,     2,     1,     1,
       0,     4,     4,     5,     0,     4,     0,     4,     0,     8,
       0,     6,     8,     3,     0,     4,     1,     2,     3,     2,
       1,     3,     2,     2,     4,     0,     6,     4,     4,     2,
       1,     0,     4,     0,     6,     0,     6,     0,     4,     1,
       1,     0,     6,     0,     6,     0,     5,     0,     0,     7,
       0,     0,     9,     2,     1,     2,     0,     4,     0,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     7,     0,     7,     4,
       4,     4,     0,     6,     0,     6,     1,     1,     1,     1,
       1,     4,     6,     6,     3,     3,     1,     0,     2,     1,
       1,     3,     3,     3,     3,     3,     2,     2,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     4,
       4,     0,     4,     2,     0,     2,     2,     1,     1,     1,
       3,     3,     0,     1,     0,     2,     1,     4,     1,     3,
       1,     4,     1,     2,     1,     3,     4,     3,     1,     2,
       2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: units  */
#line 102 "spin.y"
                        { yytext[0] = '\0'; }
#line 2236 "y.tab.c"
    break;

  case 16: /* l_par: '('  */
#line 122 "spin.y"
                        { par_cnt++; }
#line 2242 "y.tab.c"
    break;

  case 17: /* r_par: ')'  */
#line 125 "spin.y"
                        { par_cnt--; }
#line 2248 "y.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 130 "spin.y"
                        { 
			  setptype(ZN, yyvsp[0], PROCTYPE, ZN);
			  setpname(yyvsp[0]);
			  context = yyvsp[0]->sym;
			  context->ini = yyvsp[-1]; /* linenr and file */
			  Expand_Ok++; /* expand struct names in decl */
			  has_ini = 0;
			}
#line 2261 "y.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 138 "spin.y"
                                { Expand_Ok--;
			  if (has_ini)
			  fatal("initializer in parameter list", (char *) 0);
			}
#line 2270 "y.tab.c"
    break;

  case 20: /* proc: inst proctype NAME $@1 l_par decl r_par $@2 Opt_priority Opt_enabler body  */
#line 144 "spin.y"
                        { ProcList *rl;
			  if (yyvsp[-10] != ZN && yyvsp[-10]->val > 0)
			  {	int j;
				rl = mk_rdy(yyvsp[-8]->sym, yyvsp[-5], yyvsp[0]->sq, yyvsp[-9]->val, yyvsp[-1], A_PROC);
			  	for (j = 0; j < yyvsp[-10]->val; j++)
				{	runnable(rl, yyvsp[-2]?yyvsp[-2]->val:1, 1);
					announce(":root:");
				}
				if (dumptab) yyvsp[-8]->sym->ini = yyvsp[-10];
			  } else
			  {	rl = mk_rdy(yyvsp[-8]->sym, yyvsp[-5], yyvsp[0]->sq, yyvsp[-9]->val, yyvsp[-1], P_PROC);
			  }
			  if (rl && has_ini == 1) /* global initializations, unsafe */
			  {	/* printf("proctype %s has initialized data\n",
					$3->sym->name);
				 */
				rl->unsafe = 1;
			  }
			  context = ZS;
			}
#line 2295 "y.tab.c"
    break;

  case 21: /* proctype: PROCTYPE  */
#line 166 "spin.y"
                        { yyval = nn(ZN,CONST,ZN,ZN); yyval->val = 0; }
#line 2301 "y.tab.c"
    break;

  case 22: /* proctype: D_PROCTYPE  */
#line 167 "spin.y"
                        { yyval = nn(ZN,CONST,ZN,ZN); yyval->val = 1; }
#line 2307 "y.tab.c"
    break;

  case 23: /* inst: %empty  */
#line 170 "spin.y"
                        { yyval = ZN; }
#line 2313 "y.tab.c"
    break;

  case 24: /* inst: ACTIVE  */
#line 171 "spin.y"
                        { yyval = nn(ZN,CONST,ZN,ZN); yyval->val = 1; }
#line 2319 "y.tab.c"
    break;

  case 25: /* inst: ACTIVE '[' const_expr ']'  */
#line 172 "spin.y"
                                    {
			  yyval = nn(ZN,CONST,ZN,ZN); yyval->val = yyvsp[-1]->val;
			  if (yyvsp[-1]->val > 255)
				non_fatal("max nr of processes is 255\n", "");
			}
#line 2329 "y.tab.c"
    break;

  case 26: /* inst: ACTIVE '[' NAME ']'  */
#line 177 "spin.y"
                              {
			  yyval = nn(ZN,CONST,ZN,ZN);
			  yyval->val = 0;
			  if (!yyvsp[-1]->sym->type)
				fatal("undeclared variable %s",
					yyvsp[-1]->sym->name);
			  else if (yyvsp[-1]->sym->ini->ntyp != CONST)
				fatal("need constant initializer for %s\n",
					yyvsp[-1]->sym->name);
			  else
				yyval->val = yyvsp[-1]->sym->ini->val;
			}
#line 2346 "y.tab.c"
    break;

  case 27: /* $@3: %empty  */
#line 191 "spin.y"
                        { context = yyvsp[0]->sym; }
#line 2352 "y.tab.c"
    break;

  case 28: /* init: INIT $@3 Opt_priority body  */
#line 193 "spin.y"
                        { ProcList *rl;
			  rl = mk_rdy(context, ZN, yyvsp[0]->sq, 0, ZN, I_PROC);
			  runnable(rl, yyvsp[-1]?yyvsp[-1]->val:1, 1);
			  announce(":root:");
			  context = ZS;
        		}
#line 2363 "y.tab.c"
    break;

  case 29: /* $@4: %empty  */
#line 201 "spin.y"
                        { ltl_mode = 1; ltl_name = yyvsp[0]->sym->name; }
#line 2369 "y.tab.c"
    break;

  case 30: /* ltl: LTL optname2 $@4 ltl_body  */
#line 202 "spin.y"
                        { if (yyvsp[0]) ltl_list(yyvsp[-2]->sym->name, yyvsp[0]->sym->name);
			  ltl_mode = 0; has_ltl = 1;
			}
#line 2377 "y.tab.c"
    break;

  case 31: /* ltl_body: '{' full_expr OS '}'  */
#line 207 "spin.y"
                               { yyval = ltl_to_string(yyvsp[-2]); }
#line 2383 "y.tab.c"
    break;

  case 32: /* ltl_body: error  */
#line 208 "spin.y"
                        { yyval = NULL; }
#line 2389 "y.tab.c"
    break;

  case 33: /* $@5: %empty  */
#line 211 "spin.y"
                        { if (yyvsp[0] != ZN)
			  {	yyvsp[-1]->sym = yyvsp[0]->sym;	/* new 5.3.0 */
			  }
			  nclaims++;
			  context = yyvsp[-1]->sym;
			  if (claimproc && !strcmp(claimproc, yyvsp[-1]->sym->name))
			  {	fatal("claim %s redefined", claimproc);
			  }
			  claimproc = yyvsp[-1]->sym->name;
			}
#line 2404 "y.tab.c"
    break;

  case 34: /* claim: CLAIM optname $@5 body  */
#line 221 "spin.y"
                        { (void) mk_rdy(yyvsp[-3]->sym, ZN, yyvsp[0]->sq, 0, ZN, N_CLAIM);
        		  context = ZS;
        		}
#line 2412 "y.tab.c"
    break;

  case 35: /* optname: %empty  */
#line 226 "spin.y"
                        { char tb[32];
			  memset(tb, 0, 32);
			  sprintf(tb, "never_%d", nclaims);
			  yyval = nn(ZN, NAME, ZN, ZN);
			  yyval->sym = lookup(tb);
			}
#line 2423 "y.tab.c"
    break;

  case 36: /* optname: NAME  */
#line 232 "spin.y"
                        { yyval = yyvsp[0]; }
#line 2429 "y.tab.c"
    break;

  case 37: /* optname2: %empty  */
#line 235 "spin.y"
                       { char tb[32]; static int nltl = 0;
			  memset(tb, 0, 32);
			  sprintf(tb, "ltl_%d", nltl++);
			  yyval = nn(ZN, NAME, ZN, ZN);
			  yyval->sym = lookup(tb);
			}
#line 2440 "y.tab.c"
    break;

  case 38: /* optname2: NAME  */
#line 241 "spin.y"
                        { yyval = yyvsp[0]; }
#line 2446 "y.tab.c"
    break;

  case 39: /* $@6: %empty  */
#line 244 "spin.y"
                        { context = yyvsp[0]->sym;
			  if (eventmap)
				non_fatal("trace %s redefined", eventmap);
			  eventmap = yyvsp[0]->sym->name;
			  inEventMap++;
			}
#line 2457 "y.tab.c"
    break;

  case 40: /* events: TRACE $@6 body  */
#line 250 "spin.y"
                        {
			  if (strcmp(yyvsp[-2]->sym->name, ":trace:") == 0)
			  {	(void) mk_rdy(yyvsp[-2]->sym, ZN, yyvsp[0]->sq, 0, ZN, E_TRACE);
			  } else
			  {	(void) mk_rdy(yyvsp[-2]->sym, ZN, yyvsp[0]->sq, 0, ZN, N_TRACE);
			  }
        		  context = ZS;
			  inEventMap--;
			}
#line 2471 "y.tab.c"
    break;

  case 41: /* $@7: %empty  */
#line 261 "spin.y"
                                {  if (context)
				   { fatal("typedef %s must be global",
					yyvsp[-1]->sym->name);
				   }
				   owner = yyvsp[-1]->sym;
				   in_seq = yyvsp[-2]->ln;
				}
#line 2483 "y.tab.c"
    break;

  case 42: /* utype: TYPEDEF NAME '{' $@7 decl_lst '}'  */
#line 268 "spin.y"
                                { setuname(yyvsp[-1]);
				  owner = ZS;
				  in_seq = 0;
				}
#line 2492 "y.tab.c"
    break;

  case 43: /* nm: NAME  */
#line 274 "spin.y"
                                { yyval = yyvsp[0]; }
#line 2498 "y.tab.c"
    break;

  case 44: /* nm: INAME  */
#line 275 "spin.y"
                                { yyval = yyvsp[0];
				  if (IArgs)
				  fatal("invalid use of '%s'", yyvsp[0]->sym->name);
				}
#line 2507 "y.tab.c"
    break;

  case 45: /* $@8: %empty  */
#line 281 "spin.y"
                                        { NamesNotAdded++; }
#line 2513 "y.tab.c"
    break;

  case 46: /* ns: INLINE nm l_par $@8 args r_par  */
#line 282 "spin.y"
                                { prep_inline(yyvsp[-4]->sym, yyvsp[-1]);
				  NamesNotAdded--;
				}
#line 2521 "y.tab.c"
    break;

  case 47: /* c_fcts: ccode  */
#line 287 "spin.y"
                                { /* leaves pseudo-inlines with sym of
				   * type CODE_FRAG or CODE_DECL in global context
				   */
				}
#line 2530 "y.tab.c"
    break;

  case 49: /* cstate: C_STATE STRING STRING  */
#line 294 "spin.y"
                                {
				  c_state(yyvsp[-1]->sym, yyvsp[0]->sym, ZS);
				  has_code = has_state = 1;
				}
#line 2539 "y.tab.c"
    break;

  case 50: /* cstate: C_TRACK STRING STRING  */
#line 298 "spin.y"
                                {
				  c_track(yyvsp[-1]->sym, yyvsp[0]->sym, ZS);
				  has_code = has_state = 1;
				}
#line 2548 "y.tab.c"
    break;

  case 51: /* cstate: C_STATE STRING STRING STRING  */
#line 302 "spin.y"
                                       {
				  c_state(yyvsp[-2]->sym, yyvsp[-1]->sym, yyvsp[0]->sym);
				  has_code = has_state = 1;
				}
#line 2557 "y.tab.c"
    break;

  case 52: /* cstate: C_TRACK STRING STRING STRING  */
#line 306 "spin.y"
                                       {
				  c_track(yyvsp[-2]->sym, yyvsp[-1]->sym, yyvsp[0]->sym);
				  has_code = has_state = 1;
				}
#line 2566 "y.tab.c"
    break;

  case 53: /* ccode: C_CODE  */
#line 312 "spin.y"
                                { Symbol *s;
				  NamesNotAdded++;
				  s = prep_inline(ZS, ZN);
				  NamesNotAdded--;
				  yyval = nn(ZN, C_CODE, ZN, ZN);
				  yyval->sym = s;
				  yyval->ln = yyvsp[0]->ln;
				  yyval->fn = yyvsp[0]->fn;
				  has_code = 1;
				}
#line 2581 "y.tab.c"
    break;

  case 54: /* ccode: C_DECL  */
#line 322 "spin.y"
                                { Symbol *s;
				  NamesNotAdded++;
				  s = prep_inline(ZS, ZN);
				  NamesNotAdded--;
				  s->type = CODE_DECL;
				  yyval = nn(ZN, C_CODE, ZN, ZN);
				  yyval->sym = s;
				  yyval->ln = yyvsp[0]->ln;
				  yyval->fn = yyvsp[0]->fn;
				  has_code = 1;
				}
#line 2597 "y.tab.c"
    break;

  case 55: /* cexpr: C_EXPR  */
#line 334 "spin.y"
                                { Symbol *s;
				  NamesNotAdded++;
				  s = prep_inline(ZS, ZN);
/* if context is 0 this was inside an ltl formula
   mark the last inline added to seqnames */
				  if (!context)
				  {	mark_last();
				  }
				  NamesNotAdded--;
				  yyval = nn(ZN, C_EXPR, ZN, ZN);
				  yyval->sym = s;
				  yyval->ln = yyvsp[0]->ln;
				  yyval->fn = yyvsp[0]->fn;
				  no_side_effects(s->name);
				  has_code = 1;
				}
#line 2618 "y.tab.c"
    break;

  case 56: /* $@9: %empty  */
#line 352 "spin.y"
                                { open_seq(1); in_seq = yyvsp[0]->ln; }
#line 2624 "y.tab.c"
    break;

  case 57: /* $@10: %empty  */
#line 353 "spin.y"
                                { add_seq(Stop); }
#line 2630 "y.tab.c"
    break;

  case 58: /* body: '{' $@9 sequence OS $@10 '}'  */
#line 354 "spin.y"
                                { yyval->sq = close_seq(0); in_seq = 0;
				  if (scope_level != 0)
				  {	non_fatal("missing '}' ?", 0);
					scope_level = 0;
				  }
				}
#line 2641 "y.tab.c"
    break;

  case 59: /* sequence: step  */
#line 362 "spin.y"
                                { if (yyvsp[0]) add_seq(yyvsp[0]); }
#line 2647 "y.tab.c"
    break;

  case 60: /* sequence: sequence MS step  */
#line 363 "spin.y"
                                { if (yyvsp[0]) add_seq(yyvsp[0]); }
#line 2653 "y.tab.c"
    break;

  case 61: /* step: one_decl  */
#line 366 "spin.y"
                                { yyval = ZN; }
#line 2659 "y.tab.c"
    break;

  case 62: /* step: XU vref_lst  */
#line 367 "spin.y"
                                { setxus(yyvsp[0], yyvsp[-1]->val); yyval = ZN; }
#line 2665 "y.tab.c"
    break;

  case 63: /* step: NAME ':' one_decl  */
#line 368 "spin.y"
                                { fatal("label preceding declaration,", (char *)0); }
#line 2671 "y.tab.c"
    break;

  case 64: /* step: NAME ':' XU  */
#line 369 "spin.y"
                                { fatal("label preceding xr/xs claim,", 0); }
#line 2677 "y.tab.c"
    break;

  case 65: /* step: stmnt  */
#line 370 "spin.y"
                                { yyval = yyvsp[0]; }
#line 2683 "y.tab.c"
    break;

  case 66: /* $@11: %empty  */
#line 371 "spin.y"
                                { if (yyvsp[-1]->ntyp == DO) { safe_break(); } }
#line 2689 "y.tab.c"
    break;

  case 67: /* step: stmnt UNLESS $@11 stmnt  */
#line 372 "spin.y"
                                { if (yyvsp[-3]->ntyp == DO) { restore_break(); }
				  yyval = do_unless(yyvsp[-3], yyvsp[0]);
				}
#line 2697 "y.tab.c"
    break;

  case 69: /* vis: %empty  */
#line 378 "spin.y"
                                { yyval = ZN; }
#line 2703 "y.tab.c"
    break;

  case 70: /* vis: HIDDEN  */
#line 379 "spin.y"
                                { yyval = yyvsp[0]; }
#line 2709 "y.tab.c"
    break;

  case 71: /* vis: SHOW  */
#line 380 "spin.y"
                                { yyval = yyvsp[0]; }
#line 2715 "y.tab.c"
    break;

  case 72: /* vis: ISLOCAL  */
#line 381 "spin.y"
                                { yyval = yyvsp[0]; }
#line 2721 "y.tab.c"
    break;

  case 73: /* asgn: %empty  */
#line 384 "spin.y"
                                { yyval = ZN; }
#line 2727 "y.tab.c"
    break;

  case 74: /* asgn: ':' NAME ASGN  */
#line 385 "spin.y"
                                { yyval = yyvsp[-1]; /* mtype decl */ }
#line 2733 "y.tab.c"
    break;

  case 75: /* asgn: ASGN  */
#line 386 "spin.y"
                                { yyval = ZN; /* mtype decl */ }
#line 2739 "y.tab.c"
    break;

  case 76: /* osubt: %empty  */
#line 389 "spin.y"
                                { yyval = ZN; }
#line 2745 "y.tab.c"
    break;

  case 77: /* osubt: ':' NAME  */
#line 390 "spin.y"
                                { yyval = yyvsp[0]; }
#line 2751 "y.tab.c"
    break;

  case 78: /* one_decl: vis TYPE osubt var_list  */
#line 393 "spin.y"
                                  {
				  setptype(yyvsp[-1], yyvsp[0], yyvsp[-2]->val, yyvsp[-3]);
				  yyvsp[0]->val = yyvsp[-2]->val;
				  yyval = yyvsp[0];
				}
#line 2761 "y.tab.c"
    break;

  case 79: /* one_decl: vis UNAME var_list  */
#line 398 "spin.y"
                                { setutype(yyvsp[0], yyvsp[-1]->sym, yyvsp[-2]);
				  yyval = expand(yyvsp[0], Expand_Ok);
				}
#line 2769 "y.tab.c"
    break;

  case 80: /* one_decl: vis TYPE asgn '{' nlst '}'  */
#line 401 "spin.y"
                                     {
				  if (yyvsp[-4]->val != MTYPE)
					fatal("malformed declaration", 0);
				  setmtype(yyvsp[-3], yyvsp[-1]);
				  if (yyvsp[-5])
					non_fatal("cannot %s mtype (ignored)",
						yyvsp[-5]->sym->name);
				  if (context != ZS)
					fatal("mtype declaration must be global", 0);
				}
#line 2784 "y.tab.c"
    break;

  case 81: /* decl_lst: one_decl  */
#line 413 "spin.y"
                                { yyval = nn(ZN, ',', yyvsp[0], ZN); }
#line 2790 "y.tab.c"
    break;

  case 82: /* decl_lst: one_decl SEMI decl_lst  */
#line 415 "spin.y"
                                { yyval = nn(ZN, ',', yyvsp[-2], yyvsp[0]); }
#line 2796 "y.tab.c"
    break;

  case 83: /* decl: %empty  */
#line 418 "spin.y"
                                { yyval = ZN; }
#line 2802 "y.tab.c"
    break;

  case 84: /* decl: decl_lst  */
#line 419 "spin.y"
                                { yyval = yyvsp[0]; }
#line 2808 "y.tab.c"
    break;

  case 85: /* vref_lst: varref  */
#line 422 "spin.y"
                                { yyval = nn(yyvsp[0], XU, yyvsp[0], ZN); }
#line 2814 "y.tab.c"
    break;

  case 86: /* vref_lst: varref ',' vref_lst  */
#line 423 "spin.y"
                                { yyval = nn(yyvsp[-2], XU, yyvsp[-2], yyvsp[0]); }
#line 2820 "y.tab.c"
    break;

  case 87: /* var_list: ivar  */
#line 426 "spin.y"
                                { yyval = nn(yyvsp[0], TYPE, ZN, ZN); }
#line 2826 "y.tab.c"
    break;

  case 88: /* var_list: ivar ',' var_list  */
#line 427 "spin.y"
                                { yyval = nn(yyvsp[-2], TYPE, ZN, yyvsp[0]); }
#line 2832 "y.tab.c"
    break;

  case 89: /* c_list: CONST  */
#line 430 "spin.y"
                                { yyvsp[0]->ntyp = CONST; yyval = yyvsp[0]; }
#line 2838 "y.tab.c"
    break;

  case 90: /* c_list: CONST ',' c_list  */
#line 431 "spin.y"
                                { yyvsp[-2]->ntyp = CONST; yyval = nn(yyvsp[-2], ',', yyvsp[-2], yyvsp[0]); }
#line 2844 "y.tab.c"
    break;

  case 91: /* ivar: vardcl  */
#line 434 "spin.y"
                                { yyval = yyvsp[0];
				  yyvsp[0]->sym->ini = nn(ZN,CONST,ZN,ZN);
				  yyvsp[0]->sym->ini->val = 0;
				  if (!initialization_ok)
				  {	Lextok *zx, *xz;
					zx = nn(ZN, NAME, ZN, ZN);
					zx->sym = yyvsp[0]->sym;
					xz = nn(zx, ASGN, zx, yyvsp[0]->sym->ini);
					keep_track_off(xz);
					/* make sure zx doesnt turn out to be a STRUCT later */
					add_seq(xz);
				  }
				}
#line 2862 "y.tab.c"
    break;

  case 92: /* ivar: vardcl ASGN '{' c_list '}'  */
#line 447 "spin.y"
                                        {	/* array initialization */
				  if (!yyvsp[-4]->sym->isarray)
					fatal("%s must be an array", yyvsp[-4]->sym->name);
				  yyval = yyvsp[-4];
				  yyvsp[-4]->sym->ini = yyvsp[-1];
				  has_ini = 1;
				  yyvsp[-4]->sym->hidden |= (4|8);	/* conservative */
				  if (!initialization_ok)
				  {	Lextok *zx = nn(ZN, NAME, ZN, ZN);
					zx->sym = yyvsp[-4]->sym;
					add_seq(nn(zx, ASGN, zx, yyvsp[-1]));
				  }
				}
#line 2880 "y.tab.c"
    break;

  case 93: /* ivar: vardcl ASGN expr  */
#line 460 "spin.y"
                                { yyval = yyvsp[-2];	/* initialized scalar */
				  yyvsp[-2]->sym->ini = yyvsp[0];
				  if (yyvsp[0]->ntyp == CONST
				  || (yyvsp[0]->ntyp == NAME && yyvsp[0]->sym->context))
				  {	has_ini = 2; /* local init */
				  } else
				  {	has_ini = 1; /* possibly global */
				  }
				  trackvar(yyvsp[-2], yyvsp[0]);
				  if (any_oper(yyvsp[0], RUN))
				  {	fatal("cannot use 'run' in var init, saw", (char *) 0);
				  }
				  nochan_manip(yyvsp[-2], yyvsp[0], 0);
				  no_internals(yyvsp[-2]);
				  if (!initialization_ok)
				  {	if (yyvsp[-2]->sym->isarray)
					{	fprintf(stderr, "warning: %s:%d initialization of %s[] ",
							yyvsp[-2]->fn->name, yyvsp[-2]->ln,
							yyvsp[-2]->sym->name);
						fprintf(stderr, "could fail if placed here\n");
					} else
					{	Lextok *zx = nn(ZN, NAME, ZN, ZN);
						zx->sym = yyvsp[-2]->sym;
						add_seq(nn(zx, ASGN, zx, yyvsp[0]));
						yyvsp[-2]->sym->ini = 0;	/* Patrick Trentlin */
				  }	}
				}
#line 2912 "y.tab.c"
    break;

  case 94: /* ivar: vardcl ASGN ch_init  */
#line 487 "spin.y"
                                { yyvsp[-2]->sym->ini = yyvsp[0];	/* channel declaration */
				  yyval = yyvsp[-2]; has_ini = 1;
				  if (!initialization_ok)
				  {	non_fatal(PART1 "'%s'" PART2, yyvsp[-2]->sym->name);
				  }
				}
#line 2923 "y.tab.c"
    break;

  case 95: /* ch_init: '[' const_expr ']' OF '{' typ_list '}'  */
#line 496 "spin.y"
                                { if (yyvsp[-5]->val)
					u_async++;
				  else
					u_sync++;
        			  {	int i = cnt_mpars(yyvsp[-1]);
					Mpars = max(Mpars, i);
				  }
        			  yyval = nn(ZN, CHAN, ZN, yyvsp[-1]);
				  yyval->val = yyvsp[-5]->val;
				  yyval->ln = yyvsp[-6]->ln;
				  yyval->fn = yyvsp[-6]->fn;
        			}
#line 2940 "y.tab.c"
    break;

  case 96: /* vardcl: NAME  */
#line 510 "spin.y"
                                { yyvsp[0]->sym->nel = 1; yyval = yyvsp[0]; }
#line 2946 "y.tab.c"
    break;

  case 97: /* vardcl: NAME ':' CONST  */
#line 511 "spin.y"
                                { yyvsp[-2]->sym->nbits = yyvsp[0]->val;
				  if (yyvsp[0]->val >= 8*sizeof(long))
				  {	non_fatal("width-field %s too large",
						yyvsp[-2]->sym->name);
					yyvsp[0]->val = 8*sizeof(long)-1;
				  }
				  yyvsp[-2]->sym->nel = 1; yyval = yyvsp[-2];
				}
#line 2959 "y.tab.c"
    break;

  case 98: /* vardcl: NAME '[' const_expr ']'  */
#line 519 "spin.y"
                                        { yyvsp[-3]->sym->nel = yyvsp[-1]->val; yyvsp[-3]->sym->isarray = 1; yyval = yyvsp[-3]; }
#line 2965 "y.tab.c"
    break;

  case 99: /* vardcl: NAME '[' NAME ']'  */
#line 520 "spin.y"
                                {	/* make an exception for an initialized scalars */
					yyval = nn(ZN, CONST, ZN, ZN);
					fprintf(stderr, "spin: %s:%d, warning: '%s' in array bound ",
						yyvsp[-3]->fn->name, yyvsp[-3]->ln, yyvsp[-1]->sym->name);
					if (yyvsp[-1]->sym->ini
					&&  yyvsp[-1]->sym->ini->val > 0)
					{	fprintf(stderr, "evaluated as %d\n", yyvsp[-1]->sym->ini->val);
						yyval->val = yyvsp[-1]->sym->ini->val;
					} else
					{	fprintf(stderr, "evaluated as 1 by default (to avoid zero)\n");
						yyval->val = 1;
					}
					yyvsp[-3]->sym->nel = yyval->val;
					yyvsp[-3]->sym->isarray = 1;
					yyval = yyvsp[-3];
				}
#line 2986 "y.tab.c"
    break;

  case 100: /* varref: cmpnd  */
#line 538 "spin.y"
                                { yyval = mk_explicit(yyvsp[0], Expand_Ok, NAME); }
#line 2992 "y.tab.c"
    break;

  case 101: /* pfld: NAME  */
#line 541 "spin.y"
                                { yyval = nn(yyvsp[0], NAME, ZN, ZN);
				  if (yyvsp[0]->sym->isarray && !in_for && !IArgs)
				  {	non_fatal("missing array index for '%s'",
						yyvsp[0]->sym->name);
				  }
				}
#line 3003 "y.tab.c"
    break;

  case 102: /* $@12: %empty  */
#line 547 "spin.y"
                                { owner = ZS; }
#line 3009 "y.tab.c"
    break;

  case 103: /* pfld: NAME $@12 '[' expr ']'  */
#line 548 "spin.y"
                                { yyval = nn(yyvsp[-4], NAME, yyvsp[-1], ZN); }
#line 3015 "y.tab.c"
    break;

  case 104: /* $@13: %empty  */
#line 551 "spin.y"
                                { Embedded++;
				  if (yyvsp[0]->sym->type == STRUCT)
					owner = yyvsp[0]->sym->Snm;
				}
#line 3024 "y.tab.c"
    break;

  case 105: /* cmpnd: pfld $@13 sfld  */
#line 555 "spin.y"
                                { yyval = yyvsp[-2]; yyval->rgt = yyvsp[0];
				  if (yyvsp[0] && yyvsp[-2]->sym->type != STRUCT)
					yyvsp[-2]->sym->type = STRUCT;
				  Embedded--;
				  if (!Embedded && !NamesNotAdded
				  &&  !yyvsp[-2]->sym->type)
				   fatal("undeclared variable: %s",
						yyvsp[-2]->sym->name);
				  if (yyvsp[0]) validref(yyvsp[-2], yyvsp[0]->lft);
				  owner = ZS;
				}
#line 3040 "y.tab.c"
    break;

  case 106: /* sfld: %empty  */
#line 568 "spin.y"
                                { yyval = ZN; }
#line 3046 "y.tab.c"
    break;

  case 107: /* sfld: '.' cmpnd  */
#line 569 "spin.y"
                                { yyval = nn(ZN, '.', yyvsp[0], ZN); }
#line 3052 "y.tab.c"
    break;

  case 108: /* stmnt: Special  */
#line 572 "spin.y"
                                { yyval = yyvsp[0]; initialization_ok = 0; }
#line 3058 "y.tab.c"
    break;

  case 109: /* stmnt: Stmnt  */
#line 573 "spin.y"
                                { yyval = yyvsp[0]; initialization_ok = 0;
				  if (inEventMap) non_fatal("not an event", (char *)0);
				}
#line 3066 "y.tab.c"
    break;

  case 110: /* $@14: %empty  */
#line 578 "spin.y"
                                { in_for = 1; }
#line 3072 "y.tab.c"
    break;

  case 111: /* for_pre: FOR l_par $@14 varref  */
#line 579 "spin.y"
                                { trapwonly(yyvsp[0] /*, "for" */);
				  pushbreak(); /* moved up */
				  yyval = yyvsp[0];
				}
#line 3081 "y.tab.c"
    break;

  case 114: /* $@15: %empty  */
#line 588 "spin.y"
                                { Expand_Ok++; }
#line 3087 "y.tab.c"
    break;

  case 115: /* Special: varref RCV $@15 rargs  */
#line 589 "spin.y"
                                { Expand_Ok--; has_io++;
				  yyval = nn(yyvsp[-3],  'r', yyvsp[-3], yyvsp[0]);
				  trackchanuse(yyvsp[0], ZN, 'R');
				}
#line 3096 "y.tab.c"
    break;

  case 116: /* $@16: %empty  */
#line 593 "spin.y"
                                { Expand_Ok++; }
#line 3102 "y.tab.c"
    break;

  case 117: /* Special: varref SND $@16 margs  */
#line 594 "spin.y"
                                { Expand_Ok--; has_io++;
				  yyval = nn(yyvsp[-3], 's', yyvsp[-3], yyvsp[0]);
				  yyval->val=0; trackchanuse(yyvsp[0], ZN, 'S');
				  any_runs(yyvsp[0]);
				}
#line 3112 "y.tab.c"
    break;

  case 118: /* $@17: %empty  */
#line 599 "spin.y"
                                                {
				  for_setup(yyvsp[-5], yyvsp[-3], yyvsp[-1]); in_for = 0;
				}
#line 3120 "y.tab.c"
    break;

  case 119: /* Special: for_pre ':' expr DOTDOT expr r_par $@17 for_post  */
#line 602 "spin.y"
                                { yyval = for_body(yyvsp[-7], 1);
				}
#line 3127 "y.tab.c"
    break;

  case 120: /* @18: %empty  */
#line 604 "spin.y"
                                        { yyval = for_index(yyvsp[-3], yyvsp[-1]); in_for = 0;
				}
#line 3134 "y.tab.c"
    break;

  case 121: /* Special: for_pre IN varref r_par @18 for_post  */
#line 606 "spin.y"
                                { yyval = for_body(yyvsp[-1], 1);
				}
#line 3141 "y.tab.c"
    break;

  case 122: /* Special: SELECT l_par varref ':' expr DOTDOT expr r_par  */
#line 608 "spin.y"
                                                         {
				  trapwonly(yyvsp[-5] /*, "select" */);
				  yyval = sel_index(yyvsp[-5], yyvsp[-3], yyvsp[-1]);
				}
#line 3150 "y.tab.c"
    break;

  case 123: /* Special: IF options FI  */
#line 612 "spin.y"
                                { yyval = nn(yyvsp[-2], IF, ZN, ZN);
        			  yyval->sl = yyvsp[-1]->sl;
				  yyval->ln = yyvsp[-2]->ln;
				  yyval->fn = yyvsp[-2]->fn;
				  prune_opts(yyval);
        			}
#line 3161 "y.tab.c"
    break;

  case 124: /* $@19: %empty  */
#line 618 "spin.y"
                                { pushbreak(); }
#line 3167 "y.tab.c"
    break;

  case 125: /* Special: DO $@19 options OD  */
#line 619 "spin.y"
                                { yyval = nn(yyvsp[-3], DO, ZN, ZN);
        			  yyval->sl = yyvsp[-1]->sl;
				  yyval->ln = yyvsp[-3]->ln;
				  yyval->fn = yyvsp[-3]->fn;
				  prune_opts(yyval);
        			}
#line 3178 "y.tab.c"
    break;

  case 126: /* Special: BREAK  */
#line 625 "spin.y"
                                { yyval = nn(ZN, GOTO, ZN, ZN);
				  yyval->sym = break_dest();
				}
#line 3186 "y.tab.c"
    break;

  case 127: /* Special: GOTO NAME  */
#line 628 "spin.y"
                                { yyval = nn(yyvsp[0], GOTO, ZN, ZN);
				  if (yyvsp[0]->sym->type != 0
				  &&  yyvsp[0]->sym->type != LABEL) {
				  	non_fatal("bad label-name %s",
					yyvsp[0]->sym->name);
				  }
				  yyvsp[0]->sym->type = LABEL;
				}
#line 3199 "y.tab.c"
    break;

  case 128: /* Special: NAME ':' stmnt  */
#line 636 "spin.y"
                                { yyval = nn(yyvsp[-2], ':',yyvsp[0], ZN);
				  if (yyvsp[-2]->sym->type != 0
				  &&  yyvsp[-2]->sym->type != LABEL) {
				  	non_fatal("bad label-name %s",
					yyvsp[-2]->sym->name);
				  }
				  yyvsp[-2]->sym->type = LABEL;
				}
#line 3212 "y.tab.c"
    break;

  case 129: /* Special: NAME ':'  */
#line 644 "spin.y"
                                { yyval = nn(yyvsp[-1], ':',ZN,ZN);
				  if (yyvsp[-1]->sym->type != 0
				  &&  yyvsp[-1]->sym->type != LABEL) {
				  	non_fatal("bad label-name %s",
					yyvsp[-1]->sym->name);
				  }
				  yyval->lft = nn(ZN, 'c', nn(ZN,CONST,ZN,ZN), ZN);
				  yyval->lft->lft->val = 1; /* skip */
				  yyvsp[-1]->sym->type = LABEL;
				}
#line 3227 "y.tab.c"
    break;

  case 130: /* Special: error  */
#line 654 "spin.y"
                                { yyval = nn(ZN, 'c', nn(ZN,CONST,ZN,ZN), ZN);
				  yyval->lft->val = 1; /* skip */
				}
#line 3235 "y.tab.c"
    break;

  case 131: /* Stmnt: varref ASGN full_expr  */
#line 659 "spin.y"
                                { yyval = nn(yyvsp[-2], ASGN, yyvsp[-2], yyvsp[0]);	/* assignment */
				  trackvar(yyvsp[-2], yyvsp[0]);
				  nochan_manip(yyvsp[-2], yyvsp[0], 0);
				  no_internals(yyvsp[-2]);
				}
#line 3245 "y.tab.c"
    break;

  case 132: /* Stmnt: varref INCR  */
#line 664 "spin.y"
                                { yyval = nn(ZN,CONST, ZN, ZN); yyval->val = 1;
				  yyval = nn(ZN,  '+', yyvsp[-1], yyval);
				  yyval = nn(yyvsp[-1], ASGN, yyvsp[-1], yyval);
				  trackvar(yyvsp[-1], yyvsp[-1]);
				  no_internals(yyvsp[-1]);
				  if (yyvsp[-1]->sym->type == CHAN)
				   fatal("arithmetic on chan", (char *)0);
				}
#line 3258 "y.tab.c"
    break;

  case 133: /* Stmnt: varref DECR  */
#line 672 "spin.y"
                                { yyval = nn(ZN,CONST, ZN, ZN); yyval->val = 1;
				  yyval = nn(ZN,  '-', yyvsp[-1], yyval);
				  yyval = nn(yyvsp[-1], ASGN, yyvsp[-1], yyval);
				  trackvar(yyvsp[-1], yyvsp[-1]);
				  no_internals(yyvsp[-1]);
				  if (yyvsp[-1]->sym->type == CHAN)
				   fatal("arithmetic on chan id's", (char *)0);
				}
#line 3271 "y.tab.c"
    break;

  case 134: /* Stmnt: SET_P l_par two_args r_par  */
#line 680 "spin.y"
                                        { yyval = nn(ZN, SET_P, yyvsp[-1], ZN); has_priority++; }
#line 3277 "y.tab.c"
    break;

  case 135: /* $@20: %empty  */
#line 681 "spin.y"
                                { realread = 0; }
#line 3283 "y.tab.c"
    break;

  case 136: /* Stmnt: PRINT l_par STRING $@20 prargs r_par  */
#line 682 "spin.y"
                                { yyval = nn(yyvsp[-3], PRINT, yyvsp[-1], ZN); realread = 1; }
#line 3289 "y.tab.c"
    break;

  case 137: /* Stmnt: PRINTM l_par varref r_par  */
#line 683 "spin.y"
                                        { yyval = nn(ZN, PRINTM, yyvsp[-1], ZN); }
#line 3295 "y.tab.c"
    break;

  case 138: /* Stmnt: PRINTM l_par CONST r_par  */
#line 684 "spin.y"
                                        { yyval = nn(ZN, PRINTM, yyvsp[-1], ZN); }
#line 3301 "y.tab.c"
    break;

  case 139: /* Stmnt: ASSERT full_expr  */
#line 685 "spin.y"
                                { yyval = nn(ZN, ASSERT, yyvsp[0], ZN); AST_track(yyvsp[0], 0); }
#line 3307 "y.tab.c"
    break;

  case 140: /* Stmnt: ccode  */
#line 686 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3313 "y.tab.c"
    break;

  case 141: /* $@21: %empty  */
#line 687 "spin.y"
                                { Expand_Ok++; }
#line 3319 "y.tab.c"
    break;

  case 142: /* Stmnt: varref R_RCV $@21 rargs  */
#line 688 "spin.y"
                                { Expand_Ok--; has_io++;
				  yyval = nn(yyvsp[-3],  'r', yyvsp[-3], yyvsp[0]);
				  yyval->val = has_random = 1;
				  trackchanuse(yyvsp[0], ZN, 'R');
				}
#line 3329 "y.tab.c"
    break;

  case 143: /* $@22: %empty  */
#line 693 "spin.y"
                                { Expand_Ok++; }
#line 3335 "y.tab.c"
    break;

  case 144: /* Stmnt: varref RCV $@22 LT rargs GT  */
#line 694 "spin.y"
                                { Expand_Ok--; has_io++;
				  yyval = nn(yyvsp[-5], 'r', yyvsp[-5], yyvsp[-1]);
				  yyval->val = 2;	/* fifo poll */
				  trackchanuse(yyvsp[-1], ZN, 'R');
				}
#line 3345 "y.tab.c"
    break;

  case 145: /* $@23: %empty  */
#line 699 "spin.y"
                                { Expand_Ok++; }
#line 3351 "y.tab.c"
    break;

  case 146: /* Stmnt: varref R_RCV $@23 LT rargs GT  */
#line 700 "spin.y"
                                { Expand_Ok--; has_io++;	/* rrcv poll */
				  yyval = nn(yyvsp[-5], 'r', yyvsp[-5], yyvsp[-1]);
				  yyval->val = 3; has_random = 1;
				  trackchanuse(yyvsp[-1], ZN, 'R');
				}
#line 3361 "y.tab.c"
    break;

  case 147: /* $@24: %empty  */
#line 705 "spin.y"
                                { Expand_Ok++; }
#line 3367 "y.tab.c"
    break;

  case 148: /* Stmnt: varref O_SND $@24 margs  */
#line 706 "spin.y"
                                { Expand_Ok--; has_io++;
				  yyval = nn(yyvsp[-3], 's', yyvsp[-3], yyvsp[0]);
				  yyval->val = has_sorted = 1;
				  trackchanuse(yyvsp[0], ZN, 'S');
				  any_runs(yyvsp[0]);
				}
#line 3378 "y.tab.c"
    break;

  case 149: /* Stmnt: full_expr  */
#line 712 "spin.y"
                                { yyval = nn(ZN, 'c', yyvsp[0], ZN); count_runs(yyval); }
#line 3384 "y.tab.c"
    break;

  case 150: /* Stmnt: ELSE  */
#line 713 "spin.y"
                                { yyval = nn(ZN,ELSE,ZN,ZN);
				}
#line 3391 "y.tab.c"
    break;

  case 151: /* $@25: %empty  */
#line 715 "spin.y"
                                { open_seq(0); }
#line 3397 "y.tab.c"
    break;

  case 152: /* Stmnt: ATOMIC '{' $@25 sequence OS '}'  */
#line 716 "spin.y"
                                { yyval = nn(yyvsp[-5], ATOMIC, ZN, ZN);
        			  yyval->sl = seqlist(close_seq(3), 0);
				  yyval->ln = yyvsp[-5]->ln;
				  yyval->fn = yyvsp[-5]->fn;
				  make_atomic(yyval->sl->this, 0);
        			}
#line 3408 "y.tab.c"
    break;

  case 153: /* $@26: %empty  */
#line 722 "spin.y"
                                { open_seq(0);
				  rem_Seq();
				}
#line 3416 "y.tab.c"
    break;

  case 154: /* Stmnt: D_STEP '{' $@26 sequence OS '}'  */
#line 725 "spin.y"
                                { yyval = nn(yyvsp[-5], D_STEP, ZN, ZN);
        			  yyval->sl = seqlist(close_seq(4), 0);
				  yyval->ln = yyvsp[-5]->ln;
				  yyval->fn = yyvsp[-5]->fn;
        			  make_atomic(yyval->sl->this, D_ATOM);
				  unrem_Seq();
        			}
#line 3428 "y.tab.c"
    break;

  case 155: /* $@27: %empty  */
#line 732 "spin.y"
                                { open_seq(0); }
#line 3434 "y.tab.c"
    break;

  case 156: /* Stmnt: '{' $@27 sequence OS '}'  */
#line 733 "spin.y"
                                { yyval = nn(ZN, NON_ATOMIC, ZN, ZN);
        			  yyval->sl = seqlist(close_seq(5), 0);
				  yyval->ln = yyvsp[-4]->ln;
				  yyval->fn = yyvsp[-4]->fn;
        			}
#line 3444 "y.tab.c"
    break;

  case 157: /* $@28: %empty  */
#line 738 "spin.y"
                                { IArgs++; }
#line 3450 "y.tab.c"
    break;

  case 158: /* $@29: %empty  */
#line 739 "spin.y"
                                { initialization_ok = 0;
				  pickup_inline(yyvsp[-4]->sym, yyvsp[-1], ZN);
				  IArgs--;
				}
#line 3459 "y.tab.c"
    break;

  case 159: /* Stmnt: INAME $@28 l_par args r_par $@29 Stmnt  */
#line 743 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3465 "y.tab.c"
    break;

  case 160: /* $@30: %empty  */
#line 745 "spin.y"
                                { IArgs++; /* inline call */ }
#line 3471 "y.tab.c"
    break;

  case 161: /* $@31: %empty  */
#line 746 "spin.y"
                                { initialization_ok = 0;
				  pickup_inline(yyvsp[-4]->sym, yyvsp[-1], yyvsp[-6]);
				  IArgs--;
				}
#line 3480 "y.tab.c"
    break;

  case 162: /* Stmnt: varref ASGN INAME $@30 l_par args r_par $@31 Stmnt  */
#line 750 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3486 "y.tab.c"
    break;

  case 163: /* Stmnt: RETURN full_expr  */
#line 751 "spin.y"
                                { yyval = return_statement(yyvsp[0]); }
#line 3492 "y.tab.c"
    break;

  case 164: /* options: option  */
#line 754 "spin.y"
                                { yyval->sl = seqlist(yyvsp[0]->sq, 0); }
#line 3498 "y.tab.c"
    break;

  case 165: /* options: option options  */
#line 755 "spin.y"
                                { yyval->sl = seqlist(yyvsp[-1]->sq, yyvsp[0]->sl); }
#line 3504 "y.tab.c"
    break;

  case 166: /* $@32: %empty  */
#line 758 "spin.y"
                                { open_seq(0); }
#line 3510 "y.tab.c"
    break;

  case 167: /* option: SEP $@32 sequence OS  */
#line 759 "spin.y"
                                { yyval = nn(ZN,0,ZN,ZN);
				  yyval->sq = close_seq(6);
				  yyval->ln = yyvsp[-3]->ln;
				  yyval->fn = yyvsp[-3]->fn;
				}
#line 3520 "y.tab.c"
    break;

  case 169: /* OS: semi  */
#line 767 "spin.y"
                                { /* redundant semi at end of sequence */ }
#line 3526 "y.tab.c"
    break;

  case 172: /* MS: semi  */
#line 774 "spin.y"
                                { /* at least one semi-colon */ }
#line 3532 "y.tab.c"
    break;

  case 173: /* MS: MS semi  */
#line 775 "spin.y"
                                { /* but more are okay too   */ }
#line 3538 "y.tab.c"
    break;

  case 174: /* aname: NAME  */
#line 778 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3544 "y.tab.c"
    break;

  case 175: /* aname: PNAME  */
#line 779 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3550 "y.tab.c"
    break;

  case 176: /* const_expr: CONST  */
#line 782 "spin.y"
                                        { yyval = yyvsp[0]; }
#line 3556 "y.tab.c"
    break;

  case 177: /* const_expr: '-' const_expr  */
#line 783 "spin.y"
                                        { yyval = yyvsp[0]; yyval->val = -(yyvsp[0]->val); }
#line 3562 "y.tab.c"
    break;

  case 178: /* const_expr: l_par const_expr r_par  */
#line 784 "spin.y"
                                                { yyval = yyvsp[-1]; }
#line 3568 "y.tab.c"
    break;

  case 179: /* const_expr: const_expr '+' const_expr  */
#line 785 "spin.y"
                                        { yyval = yyvsp[-2]; yyval->val = yyvsp[-2]->val + yyvsp[0]->val; }
#line 3574 "y.tab.c"
    break;

  case 180: /* const_expr: const_expr '-' const_expr  */
#line 786 "spin.y"
                                        { yyval = yyvsp[-2]; yyval->val = yyvsp[-2]->val - yyvsp[0]->val; }
#line 3580 "y.tab.c"
    break;

  case 181: /* const_expr: const_expr '*' const_expr  */
#line 787 "spin.y"
                                        { yyval = yyvsp[-2]; yyval->val = yyvsp[-2]->val * yyvsp[0]->val; }
#line 3586 "y.tab.c"
    break;

  case 182: /* const_expr: const_expr '/' const_expr  */
#line 788 "spin.y"
                                        { yyval = yyvsp[-2];
					  if (yyvsp[0]->val == 0)
					  { fatal("division by zero", (char *) 0);
					  }
					  yyval->val = yyvsp[-2]->val / yyvsp[0]->val;
					}
#line 3597 "y.tab.c"
    break;

  case 183: /* const_expr: const_expr '%' const_expr  */
#line 794 "spin.y"
                                        { yyval = yyvsp[-2];
					  if (yyvsp[0]->val == 0)
					  { fatal("attempt to take modulo of zero", (char *) 0);
					  }
					  yyval->val = yyvsp[-2]->val % yyvsp[0]->val;
					}
#line 3608 "y.tab.c"
    break;

  case 184: /* expr: l_par expr r_par  */
#line 802 "spin.y"
                                        { yyval = yyvsp[-1]; }
#line 3614 "y.tab.c"
    break;

  case 185: /* expr: expr '+' expr  */
#line 803 "spin.y"
                                { yyval = nn(ZN, '+', yyvsp[-2], yyvsp[0]); }
#line 3620 "y.tab.c"
    break;

  case 186: /* expr: expr '-' expr  */
#line 804 "spin.y"
                                { yyval = nn(ZN, '-', yyvsp[-2], yyvsp[0]); }
#line 3626 "y.tab.c"
    break;

  case 187: /* expr: expr '*' expr  */
#line 805 "spin.y"
                                { yyval = nn(ZN, '*', yyvsp[-2], yyvsp[0]); }
#line 3632 "y.tab.c"
    break;

  case 188: /* expr: expr '/' expr  */
#line 806 "spin.y"
                                { yyval = nn(ZN, '/', yyvsp[-2], yyvsp[0]); }
#line 3638 "y.tab.c"
    break;

  case 189: /* expr: expr '%' expr  */
#line 807 "spin.y"
                                { yyval = nn(ZN, '%', yyvsp[-2], yyvsp[0]); }
#line 3644 "y.tab.c"
    break;

  case 190: /* expr: expr '&' expr  */
#line 808 "spin.y"
                                { yyval = nn(ZN, '&', yyvsp[-2], yyvsp[0]); }
#line 3650 "y.tab.c"
    break;

  case 191: /* expr: expr '^' expr  */
#line 809 "spin.y"
                                { yyval = nn(ZN, '^', yyvsp[-2], yyvsp[0]); }
#line 3656 "y.tab.c"
    break;

  case 192: /* expr: expr '|' expr  */
#line 810 "spin.y"
                                { yyval = nn(ZN, '|', yyvsp[-2], yyvsp[0]); }
#line 3662 "y.tab.c"
    break;

  case 193: /* expr: expr GT expr  */
#line 811 "spin.y"
                                { yyval = nn(ZN,  GT, yyvsp[-2], yyvsp[0]); }
#line 3668 "y.tab.c"
    break;

  case 194: /* expr: expr LT expr  */
#line 812 "spin.y"
                                { yyval = nn(ZN,  LT, yyvsp[-2], yyvsp[0]); }
#line 3674 "y.tab.c"
    break;

  case 195: /* expr: expr GE expr  */
#line 813 "spin.y"
                                { yyval = nn(ZN,  GE, yyvsp[-2], yyvsp[0]); }
#line 3680 "y.tab.c"
    break;

  case 196: /* expr: expr LE expr  */
#line 814 "spin.y"
                                { yyval = nn(ZN,  LE, yyvsp[-2], yyvsp[0]); }
#line 3686 "y.tab.c"
    break;

  case 197: /* expr: expr EQ expr  */
#line 815 "spin.y"
                                { yyval = nn(ZN,  EQ, yyvsp[-2], yyvsp[0]); }
#line 3692 "y.tab.c"
    break;

  case 198: /* expr: expr NE expr  */
#line 816 "spin.y"
                                { yyval = nn(ZN,  NE, yyvsp[-2], yyvsp[0]); }
#line 3698 "y.tab.c"
    break;

  case 199: /* expr: expr AND expr  */
#line 817 "spin.y"
                                { yyval = nn(ZN, AND, yyvsp[-2], yyvsp[0]); }
#line 3704 "y.tab.c"
    break;

  case 200: /* expr: expr OR expr  */
#line 818 "spin.y"
                                { yyval = nn(ZN,  OR, yyvsp[-2], yyvsp[0]); }
#line 3710 "y.tab.c"
    break;

  case 201: /* expr: expr LSHIFT expr  */
#line 819 "spin.y"
                                { yyval = nn(ZN, LSHIFT,yyvsp[-2], yyvsp[0]); }
#line 3716 "y.tab.c"
    break;

  case 202: /* expr: expr RSHIFT expr  */
#line 820 "spin.y"
                                { yyval = nn(ZN, RSHIFT,yyvsp[-2], yyvsp[0]); }
#line 3722 "y.tab.c"
    break;

  case 203: /* expr: '~' expr  */
#line 821 "spin.y"
                                { yyval = nn(ZN, '~', yyvsp[0], ZN); }
#line 3728 "y.tab.c"
    break;

  case 204: /* expr: '-' expr  */
#line 822 "spin.y"
                                { yyval = nn(ZN, UMIN, yyvsp[0], ZN); }
#line 3734 "y.tab.c"
    break;

  case 205: /* expr: SND expr  */
#line 823 "spin.y"
                                { yyval = nn(ZN, '!', yyvsp[0], ZN); }
#line 3740 "y.tab.c"
    break;

  case 206: /* expr: l_par expr ARROW expr ':' expr r_par  */
#line 825 "spin.y"
                                               {
				  yyval = nn(ZN,  OR, yyvsp[-3], yyvsp[-1]);
				  yyval = nn(ZN, '?', yyvsp[-5], yyval);
				}
#line 3749 "y.tab.c"
    break;

  case 207: /* $@33: %empty  */
#line 830 "spin.y"
                                { Expand_Ok++;
				  if (!context)
				   fatal("used 'run' outside proctype", (char *) 0);
				}
#line 3758 "y.tab.c"
    break;

  case 208: /* expr: RUN aname $@33 l_par args r_par Opt_priority  */
#line 835 "spin.y"
                                { Expand_Ok--;
				  yyval = nn(yyvsp[-5], RUN, yyvsp[-2], ZN);
				  yyval->val = (yyvsp[0]) ? yyvsp[0]->val : 0;
				  trackchanuse(yyvsp[-2], yyvsp[-5], 'A'); trackrun(yyval);
				}
#line 3768 "y.tab.c"
    break;

  case 209: /* expr: LEN l_par varref r_par  */
#line 840 "spin.y"
                                        { yyval = nn(yyvsp[-1], LEN, yyvsp[-1], ZN); }
#line 3774 "y.tab.c"
    break;

  case 210: /* expr: ENABLED l_par expr r_par  */
#line 841 "spin.y"
                                        { yyval = nn(ZN, ENABLED, yyvsp[-1], ZN); has_enabled++; }
#line 3780 "y.tab.c"
    break;

  case 211: /* expr: GET_P l_par expr r_par  */
#line 842 "spin.y"
                                        { yyval = nn(ZN, GET_P, yyvsp[-1], ZN); has_priority++; }
#line 3786 "y.tab.c"
    break;

  case 212: /* $@34: %empty  */
#line 843 "spin.y"
                                { Expand_Ok++; }
#line 3792 "y.tab.c"
    break;

  case 213: /* expr: varref RCV $@34 '[' rargs ']'  */
#line 844 "spin.y"
                                { Expand_Ok--; has_io++;
				  yyval = nn(yyvsp[-5], 'R', yyvsp[-5], yyvsp[-1]);
				}
#line 3800 "y.tab.c"
    break;

  case 214: /* $@35: %empty  */
#line 847 "spin.y"
                                { Expand_Ok++; }
#line 3806 "y.tab.c"
    break;

  case 215: /* expr: varref R_RCV $@35 '[' rargs ']'  */
#line 848 "spin.y"
                                { Expand_Ok--; has_io++;
				  yyval = nn(yyvsp[-5], 'R', yyvsp[-5], yyvsp[-1]);
				  yyval->val = has_random = 1;
				}
#line 3815 "y.tab.c"
    break;

  case 216: /* expr: varref  */
#line 852 "spin.y"
                                { yyval = yyvsp[0]; trapwonly(yyvsp[0] /*, "varref" */); }
#line 3821 "y.tab.c"
    break;

  case 217: /* expr: cexpr  */
#line 853 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3827 "y.tab.c"
    break;

  case 218: /* expr: CONST  */
#line 854 "spin.y"
                                { yyval = nn(ZN,CONST,ZN,ZN);
				  yyval->ismtyp = yyvsp[0]->ismtyp;
				  yyval->sym = yyvsp[0]->sym;
				  yyval->val = yyvsp[0]->val;
				}
#line 3837 "y.tab.c"
    break;

  case 219: /* expr: TIMEOUT  */
#line 859 "spin.y"
                                { yyval = nn(ZN,TIMEOUT, ZN, ZN); }
#line 3843 "y.tab.c"
    break;

  case 220: /* expr: NONPROGRESS  */
#line 860 "spin.y"
                                { yyval = nn(ZN,NONPROGRESS, ZN, ZN);
				  has_np++;
				}
#line 3851 "y.tab.c"
    break;

  case 221: /* expr: PC_VAL l_par expr r_par  */
#line 863 "spin.y"
                                        { yyval = nn(ZN, PC_VAL, yyvsp[-1], ZN);
				  has_pcvalue++;
				}
#line 3859 "y.tab.c"
    break;

  case 222: /* expr: PNAME '[' expr ']' '@' NAME  */
#line 867 "spin.y"
                                { yyval = rem_lab(yyvsp[-5]->sym, yyvsp[-3], yyvsp[0]->sym); }
#line 3865 "y.tab.c"
    break;

  case 223: /* expr: PNAME '[' expr ']' ':' pfld  */
#line 869 "spin.y"
                                { yyval = rem_var(yyvsp[-5]->sym, yyvsp[-3], yyvsp[0]->sym, yyvsp[0]->lft); }
#line 3871 "y.tab.c"
    break;

  case 224: /* expr: PNAME '@' NAME  */
#line 870 "spin.y"
                                { yyval = rem_lab(yyvsp[-2]->sym, ZN, yyvsp[0]->sym); }
#line 3877 "y.tab.c"
    break;

  case 225: /* expr: PNAME ':' pfld  */
#line 871 "spin.y"
                                { yyval = rem_var(yyvsp[-2]->sym, ZN, yyvsp[0]->sym, yyvsp[0]->lft); }
#line 3883 "y.tab.c"
    break;

  case 226: /* expr: ltl_expr  */
#line 872 "spin.y"
                                { yyval = yyvsp[0]; /* sanity_check($1); */ }
#line 3889 "y.tab.c"
    break;

  case 227: /* Opt_priority: %empty  */
#line 875 "spin.y"
                                { yyval = ZN; }
#line 3895 "y.tab.c"
    break;

  case 228: /* Opt_priority: PRIORITY CONST  */
#line 876 "spin.y"
                                { yyval = yyvsp[0]; has_priority++; }
#line 3901 "y.tab.c"
    break;

  case 229: /* full_expr: expr  */
#line 879 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3907 "y.tab.c"
    break;

  case 230: /* full_expr: Expr  */
#line 880 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3913 "y.tab.c"
    break;

  case 231: /* ltl_expr: expr UNTIL expr  */
#line 883 "spin.y"
                                { yyval = nn(ZN, UNTIL,   yyvsp[-2], yyvsp[0]); }
#line 3919 "y.tab.c"
    break;

  case 232: /* ltl_expr: expr RELEASE expr  */
#line 884 "spin.y"
                                { yyval = nn(ZN, RELEASE, yyvsp[-2], yyvsp[0]); }
#line 3925 "y.tab.c"
    break;

  case 233: /* ltl_expr: expr WEAK_UNTIL expr  */
#line 885 "spin.y"
                                { yyval = nn(ZN, ALWAYS, yyvsp[-2], ZN);
				  yyval = nn(ZN, OR, yyval, nn(ZN, UNTIL, yyvsp[-2], yyvsp[0]));
				}
#line 3933 "y.tab.c"
    break;

  case 234: /* ltl_expr: expr IMPLIES expr  */
#line 888 "spin.y"
                                { yyval = nn(ZN, '!', yyvsp[-2], ZN);
				  yyval = nn(ZN, OR,  yyval, yyvsp[0]);
				}
#line 3941 "y.tab.c"
    break;

  case 235: /* ltl_expr: expr EQUIV expr  */
#line 891 "spin.y"
                                { yyval = nn(ZN, EQUIV,   yyvsp[-2], yyvsp[0]); }
#line 3947 "y.tab.c"
    break;

  case 236: /* ltl_expr: NEXT expr  */
#line 892 "spin.y"
                                    { yyval = nn(ZN, NEXT,  yyvsp[0], ZN); }
#line 3953 "y.tab.c"
    break;

  case 237: /* ltl_expr: ALWAYS expr  */
#line 893 "spin.y"
                                    { yyval = nn(ZN, ALWAYS,yyvsp[0], ZN); }
#line 3959 "y.tab.c"
    break;

  case 238: /* ltl_expr: EVENTUALLY expr  */
#line 894 "spin.y"
                                    { yyval = nn(ZN, EVENTUALLY, yyvsp[0], ZN); }
#line 3965 "y.tab.c"
    break;

  case 239: /* Expr: Probe  */
#line 898 "spin.y"
                                { yyval = yyvsp[0]; }
#line 3971 "y.tab.c"
    break;

  case 240: /* Expr: l_par Expr r_par  */
#line 899 "spin.y"
                                { yyval = yyvsp[-1]; }
#line 3977 "y.tab.c"
    break;

  case 241: /* Expr: Expr AND Expr  */
#line 900 "spin.y"
                                { yyval = nn(ZN, AND, yyvsp[-2], yyvsp[0]); }
#line 3983 "y.tab.c"
    break;

  case 242: /* Expr: Expr AND expr  */
#line 901 "spin.y"
                                { yyval = nn(ZN, AND, yyvsp[-2], yyvsp[0]); }
#line 3989 "y.tab.c"
    break;

  case 243: /* Expr: expr AND Expr  */
#line 902 "spin.y"
                                { yyval = nn(ZN, AND, yyvsp[-2], yyvsp[0]); }
#line 3995 "y.tab.c"
    break;

  case 244: /* Expr: Expr OR Expr  */
#line 903 "spin.y"
                                { yyval = nn(ZN,  OR, yyvsp[-2], yyvsp[0]); }
#line 4001 "y.tab.c"
    break;

  case 245: /* Expr: Expr OR expr  */
#line 904 "spin.y"
                                { yyval = nn(ZN,  OR, yyvsp[-2], yyvsp[0]); }
#line 4007 "y.tab.c"
    break;

  case 246: /* Expr: expr OR Expr  */
#line 905 "spin.y"
                                { yyval = nn(ZN,  OR, yyvsp[-2], yyvsp[0]); }
#line 4013 "y.tab.c"
    break;

  case 247: /* Probe: FULL l_par varref r_par  */
#line 908 "spin.y"
                                        { yyval = nn(yyvsp[-1],  FULL, yyvsp[-1], ZN); }
#line 4019 "y.tab.c"
    break;

  case 248: /* Probe: NFULL l_par varref r_par  */
#line 909 "spin.y"
                                        { yyval = nn(yyvsp[-1], NFULL, yyvsp[-1], ZN); }
#line 4025 "y.tab.c"
    break;

  case 249: /* Probe: EMPTY l_par varref r_par  */
#line 910 "spin.y"
                                        { yyval = nn(yyvsp[-1], EMPTY, yyvsp[-1], ZN); }
#line 4031 "y.tab.c"
    break;

  case 250: /* Probe: NEMPTY l_par varref r_par  */
#line 911 "spin.y"
                                        { yyval = nn(yyvsp[-1],NEMPTY, yyvsp[-1], ZN); }
#line 4037 "y.tab.c"
    break;

  case 251: /* Opt_enabler: %empty  */
#line 914 "spin.y"
                                { yyval = ZN; }
#line 4043 "y.tab.c"
    break;

  case 252: /* Opt_enabler: PROVIDED l_par full_expr r_par  */
#line 915 "spin.y"
                                         {
				   if (!proper_enabler(yyvsp[-1]))
				   { non_fatal("invalid PROVIDED clause", (char *)0);
				     yyval = ZN;
				   } else
				   { yyval = yyvsp[-1];
				 } }
#line 4055 "y.tab.c"
    break;

  case 253: /* Opt_enabler: PROVIDED error  */
#line 922 "spin.y"
                                 { yyval = ZN;
				   non_fatal("usage: provided ( ..expr.. )", (char *)0);
				 }
#line 4063 "y.tab.c"
    break;

  case 254: /* oname: %empty  */
#line 927 "spin.y"
                                { yyval = ZN; }
#line 4069 "y.tab.c"
    break;

  case 255: /* oname: ':' NAME  */
#line 928 "spin.y"
                                { yyval = yyvsp[0]; }
#line 4075 "y.tab.c"
    break;

  case 256: /* basetype: TYPE oname  */
#line 931 "spin.y"
                                { if (yyvsp[0])
				  {	if (yyvsp[-1]->val != MTYPE)
					{	explain(yyvsp[-1]->val);
						fatal("unexpected type", (char *) 0);
				  }	}
				  yyval->sym = yyvsp[0] ? yyvsp[0]->sym : ZS;
				  yyval->val = yyvsp[-1]->val;
				  if (yyval->val == UNSIGNED)
				  fatal("unsigned cannot be used as mesg type", 0);
				}
#line 4090 "y.tab.c"
    break;

  case 257: /* basetype: UNAME  */
#line 941 "spin.y"
                                { yyval->sym = yyvsp[0]->sym;
				  yyval->val = STRUCT;
				}
#line 4098 "y.tab.c"
    break;

  case 259: /* typ_list: basetype  */
#line 947 "spin.y"
                                { yyval = nn(yyvsp[0], yyvsp[0]->val, ZN, ZN); }
#line 4104 "y.tab.c"
    break;

  case 260: /* typ_list: basetype ',' typ_list  */
#line 948 "spin.y"
                                { yyval = nn(yyvsp[-2], yyvsp[-2]->val, ZN, yyvsp[0]); }
#line 4110 "y.tab.c"
    break;

  case 261: /* two_args: expr ',' expr  */
#line 951 "spin.y"
                                { yyval = nn(ZN, ',', yyvsp[-2], yyvsp[0]); }
#line 4116 "y.tab.c"
    break;

  case 262: /* args: %empty  */
#line 954 "spin.y"
                                { yyval = ZN; }
#line 4122 "y.tab.c"
    break;

  case 263: /* args: arg  */
#line 955 "spin.y"
                                { yyval = yyvsp[0]; }
#line 4128 "y.tab.c"
    break;

  case 264: /* prargs: %empty  */
#line 958 "spin.y"
                                { yyval = ZN; }
#line 4134 "y.tab.c"
    break;

  case 265: /* prargs: ',' arg  */
#line 959 "spin.y"
                                { yyval = yyvsp[0]; }
#line 4140 "y.tab.c"
    break;

  case 266: /* margs: arg  */
#line 962 "spin.y"
                                { yyval = yyvsp[0]; }
#line 4146 "y.tab.c"
    break;

  case 267: /* margs: expr l_par arg r_par  */
#line 963 "spin.y"
                                { if (yyvsp[-3]->ntyp == ',')
					yyval = tail_add(yyvsp[-3], yyvsp[-1]);
				  else
				  	yyval = nn(ZN, ',', yyvsp[-3], yyvsp[-1]);
				}
#line 4156 "y.tab.c"
    break;

  case 268: /* arg: expr  */
#line 970 "spin.y"
                                { if (yyvsp[0]->ntyp == ',')
					yyval = yyvsp[0];
				  else
				  	yyval = nn(ZN, ',', yyvsp[0], ZN);
				}
#line 4166 "y.tab.c"
    break;

  case 269: /* arg: expr ',' arg  */
#line 975 "spin.y"
                                { if (yyvsp[-2]->ntyp == ',')
					yyval = tail_add(yyvsp[-2], yyvsp[0]);
				  else
				  	yyval = nn(ZN, ',', yyvsp[-2], yyvsp[0]);
				}
#line 4176 "y.tab.c"
    break;

  case 270: /* rarg: varref  */
#line 982 "spin.y"
                                { yyval = yyvsp[0]; trackvar(yyvsp[0], yyvsp[0]);
				  trapwonly(yyvsp[0] /*, "rarg" */); }
#line 4183 "y.tab.c"
    break;

  case 271: /* rarg: EVAL l_par expr r_par  */
#line 984 "spin.y"
                                { yyval = nn(ZN,EVAL,yyvsp[-1],ZN);
				  trapwonly(yyvsp[-3] /*, "eval rarg" */); }
#line 4190 "y.tab.c"
    break;

  case 272: /* rarg: CONST  */
#line 986 "spin.y"
                                { yyval = nn(ZN,CONST,ZN,ZN);
				  yyval->ismtyp = yyvsp[0]->ismtyp;
				  yyval->sym = yyvsp[0]->sym;
				  yyval->val = yyvsp[0]->val;
				}
#line 4200 "y.tab.c"
    break;

  case 273: /* rarg: '-' CONST  */
#line 991 "spin.y"
                                { yyval = nn(ZN,CONST,ZN,ZN);
				  yyval->val = - (yyvsp[0]->val);
				}
#line 4208 "y.tab.c"
    break;

  case 274: /* rargs: rarg  */
#line 996 "spin.y"
                                { if (yyvsp[0]->ntyp == ',')
					yyval = yyvsp[0];
				  else
				  	yyval = nn(ZN, ',', yyvsp[0], ZN);
				}
#line 4218 "y.tab.c"
    break;

  case 275: /* rargs: rarg ',' rargs  */
#line 1001 "spin.y"
                                { if (yyvsp[-2]->ntyp == ',')
					yyval = tail_add(yyvsp[-2], yyvsp[0]);
				  else
				  	yyval = nn(ZN, ',', yyvsp[-2], yyvsp[0]);
				}
#line 4228 "y.tab.c"
    break;

  case 276: /* rargs: rarg l_par rargs r_par  */
#line 1006 "spin.y"
                                        { if (yyvsp[-3]->ntyp == ',')
					yyval = tail_add(yyvsp[-3], yyvsp[-1]);
				  else
				  	yyval = nn(ZN, ',', yyvsp[-3], yyvsp[-1]);
				}
#line 4238 "y.tab.c"
    break;

  case 277: /* rargs: l_par rargs r_par  */
#line 1011 "spin.y"
                                        { yyval = yyvsp[-1]; }
#line 4244 "y.tab.c"
    break;

  case 278: /* nlst: NAME  */
#line 1014 "spin.y"
                                { yyval = nn(yyvsp[0], NAME, ZN, ZN);
				  yyval = nn(ZN, ',', yyval, ZN); }
#line 4251 "y.tab.c"
    break;

  case 279: /* nlst: nlst NAME  */
#line 1016 "spin.y"
                                { yyval = nn(yyvsp[0], NAME, ZN, ZN);
				  yyval = nn(ZN, ',', yyval, yyvsp[-1]);
				}
#line 4259 "y.tab.c"
    break;

  case 280: /* nlst: nlst ','  */
#line 1019 "spin.y"
                                { yyval = yyvsp[-1]; /* commas optional */ }
#line 4265 "y.tab.c"
    break;


#line 4269 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1021 "spin.y"


#define binop(n, sop)	fprintf(fd, "("); recursive(fd, n->lft); \
			fprintf(fd, ") %s (", sop); recursive(fd, n->rgt); \
			fprintf(fd, ")");
#define unop(n, sop)	fprintf(fd, "%s (", sop); recursive(fd, n->lft); \
			fprintf(fd, ")");

static void
recursive(FILE *fd, Lextok *n)
{
	if (n)
	switch (n->ntyp) {
	case NEXT:
		unop(n, "X");
		break;
	case ALWAYS:
		unop(n, "[]");
		break;
	case EVENTUALLY:
		unop(n, "<>");
		break;
	case '!':
		unop(n, "!");
		break;
	case UNTIL:
		binop(n, "U");
		break;
	case WEAK_UNTIL:
		binop(n, "W");
		break;
	case RELEASE: /* see http://en.wikipedia.org/wiki/Linear_temporal_logic */
		binop(n, "V");
		break;
	case OR:
		binop(n, "||");
		break;
	case AND:
		binop(n, "&&");
		break;
	case IMPLIES:
		binop(n, "->");
		break;
	case EQUIV:
		binop(n, "<->");
		break;
	case C_EXPR:
		fprintf(fd, "c_expr { %s }", put_inline(fd, n->sym->name));
		break;
	default:
		comment(fd, n, 0);
		break;
	}
}

#ifdef __MINGW32__
extern ssize_t getline(char **, size_t *, FILE *); /* see main.c */
#endif

static Lextok *
ltl_to_string(Lextok *n)
{	Lextok *m = nn(ZN, 0, ZN, ZN);
	ssize_t retval;
	char *ltl_formula = NULL;
	FILE *tf = fopen(TMP_FILE1, "w+"); /* tmpfile() fails on Windows 7 */

	/* convert the parsed ltl to a string
	   by writing into a file, using existing functions,
	   and then passing it to the existing interface for
	   conversion into a never claim
	  (this means parsing everything twice, which is
	   a little redundant, but adds only miniscule overhead)
	 */

	if (!tf)
	{	fatal("cannot create temporary file", (char *) 0);
	}
	dont_simplify = 1;
	recursive(tf, n);
	dont_simplify = 0;
	(void) fseek(tf, 0L, SEEK_SET);

	size_t linebuffsize = 0;
	retval = getline(&ltl_formula, &linebuffsize, tf);
	fclose(tf);

	(void) unlink(TMP_FILE1);

	if (!retval)
	{	printf("%ld\n", (long int) retval);
		fatal("could not translate ltl ltl_formula", 0);
	}

	if (1) printf("ltl %s: %s\n", ltl_name, ltl_formula);

	m->sym = lookup(ltl_formula);
#ifndef __MINGW32__
	free(ltl_formula);
#endif
	return m;
}

int
is_temporal(int t)
{
	return (t == EVENTUALLY || t == ALWAYS || t == UNTIL
	     || t == WEAK_UNTIL || t == RELEASE);
}

int
is_boolean(int t)
{
	return (t == AND || t == OR || t == IMPLIES || t == EQUIV);
}

#if 0
/* flags correct formula like: ltl { true U (true U true) } */
void
sanity_check(Lextok *t)	/* check proper embedding of ltl_expr */
{
	if (!t) return;
	sanity_check(t->lft);
	sanity_check(t->rgt);

	if (t->lft && t->rgt)
	{	if (!is_boolean(t->ntyp)
		&&  (is_temporal(t->lft->ntyp)
		||   is_temporal(t->rgt->ntyp)))
		{	printf("spin: attempt to apply '");
			explain(t->ntyp);
			printf("' to '");
			explain(t->lft->ntyp);
			printf("' and '");
			explain(t->rgt->ntyp);
			printf("'\n");
	/*		non_fatal("missing parentheses?", (char *)0); */
	}	}
}
#endif

void
yyerror(char *fmt, ...)
{
	non_fatal(fmt, (char *) 0);
}
