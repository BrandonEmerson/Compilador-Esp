typedef union {
   int pos;
   int ival;
   string sval;
} YYSTYPE;
#define	ID	258
#define	STRING	259
#define	INT	260
#define	DESPLIEGA 261
#define SI        262
#define SINO      263
#define ENTERO    269
#define PRINCIPAL 270
#define PARA      271
#define RETORNA   272
#define CONSTANTE 273

#DEFINE PARENTESISA 274
#DEFINE PARENTESISC 275
#DEFINE COMA 276
#DEFINE IGUAL 277
#DEFINE IGUALIGUAL 278
#DEFINE LLAVEA 279
#DEFINE LLAVEC 280
#DEFINE PUNTOCOMA 281
#DEFINE DOSPUNTOS 282
#DEFINE MAYORQUE 283
#DEFINE MENORQUE 284
#DEFINE SUMA 285
#DEFINE RESTA 286
#DEFINE MULTIPLICACION 287
#DEFINE DIVISION 288
#DEFINE AND 289
#DEFINE OR 290
#DEFINE COMILLA 291
extern YYSTYPE yylval;
