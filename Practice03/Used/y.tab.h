#define NUMBER 257
#define VAR 258
#define BLTIN 259
#define INDEF 260
#define UNARYMINUS 261
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
  double num;
  Symbol *sym;
	ComplejoAP val;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
