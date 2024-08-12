static int FUN1(struct VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
FUN2(VAR5, VAR6);
struct VAR7 *VAR8;
char VAR9[256];
int VAR10 = 0;

VAR10 = FUN3(VAR2, &VAR6);
if (VAR10)
return VAR10;

VAR10 = FUN4(VAR2);
if (VAR10) {
FUN5("");
goto VAR11;
}



FUN6("\
\VAR12\
};							    \VAR12\
", VAR3);


FUN7(VAR2, VAR3);

FUN8(VAR2, VAR3);

FUN6("\
\VAR12\
static inline struct %1$VAR13 *				    \VAR12\
%1$FUN9(void)					    \VAR12\
{							    \VAR12\
struct %1$VAR13 *VAR14;				    \VAR12\
\VAR12\
VAR14 = FUN10(sizeof(*VAR14));		    \VAR12\
if (!VAR14)					    \VAR12\
goto VAR15;				    \VAR12\
VAR14->VAR16.VAR17 = (void *)&VAR14->VAR18 - (void *)VAR14; \VAR12\
",
VAR3, VAR6.VAR19);
FUN11(VAR8, VAR2) {
const void *VAR20 = NULL;
size_t VAR21 = 0;

if (!FUN12(VAR8, VAR9, sizeof(VAR9)))
continue;

FUN6("\
\VAR12\
VAR14->%1$VAR13 = FUN13((void *)\"\\	    \VAR12\
", VAR9);
VAR20 = FUN14(VAR8, &VAR21);
FUN15(VAR20, VAR21);
FUN6("\
\VAR12\
\", %1$VAR22, %2$VAR22);					    \VAR12\
if (!VAR14->%3$VAR13)				    \VAR12\
goto VAR15;				    \VAR12\
VAR14->VAR23.%3$VAR13.VAR24 = (VAR25) (long) VAR14->%3$VAR13;\VAR12\
", FUN16(VAR8), VAR21, VAR9);
}
FUN6("\
\VAR12\
return VAR14;					    \VAR12\
VAR15:						    \VAR12\
%1$FUN17(VAR14);				    \VAR12\
return NULL;					    \VAR12\
}							    \VAR12\
\VAR12\
static inline int					    \VAR12\
%1$FUN18(struct %1$VAR13 *VAR14)				    \VAR12\
{							    \VAR12\
struct bpf_load_and_run_opts VAR6 = {};		    \VAR12\
int VAR10;					    \VAR12\
\VAR12\
VAR6.VAR16 = (struct VAR26 *)VAR14;	    \VAR12\
VAR6.VAR19 = %2$VAR27;				    \VAR12\
VAR6.VAR28 = (void *)\"\\			    \VAR12\
",
VAR3, VAR6.VAR19);
FUN15(VAR6.VAR28, VAR6.VAR19);
FUN6("\
\VAR12\
\";							    \VAR12\
");

FUN6("\
\VAR12\
VAR6.VAR29 = %VAR27;				    \VAR12\
VAR6.VAR30 = (void *)\"\\			    \VAR12\
",
VAR6.VAR29);
FUN15(VAR6.VAR30, VAR6.VAR29);
FUN6("\
\VAR12\
\";							    \VAR12\
VAR10 = FUN19(&VAR6);			    \VAR12\
if (VAR10 < 0)					    \VAR12\
return VAR10;				    \VAR12\
", VAR3);
FUN11(VAR8, VAR2) {
const char *VAR31;

if (!FUN12(VAR8, VAR9, sizeof(VAR9)))
continue;

if (FUN20(VAR8) & VAR32)
VAR31 = "";
else
VAR31 = "";

FUN6("\
\VAR12\
VAR14->%1$VAR13 = FUN21(&VAR14->VAR23.%1$VAR13.VAR24,  \VAR12\
%2$VAR22, %3$VAR13, VAR14->VAR23.%1$VAR13.VAR33);\VAR12\
if (!VAR14->%1$VAR13)				    \VAR12\
return -VAR34;				    \VAR12\
",
VAR9, FUN16(VAR8), VAR31);
}
FUN6("\
\VAR12\
return 0;					    \VAR12\
}							    \VAR12\
\VAR12\
static inline struct %1$VAR13 *				    \VAR12\
%1$FUN22(void)				    \VAR12\
{							    \VAR12\
struct %1$VAR13 *VAR14;				    \VAR12\
\VAR12\
VAR14 = %1$FUN9();				    \VAR12\
if (!VAR14)					    \VAR12\
return NULL;				    \VAR12\
if (%1$FUN18(VAR14)) {				    \VAR12\
%1$FUN17(VAR14);			    \VAR12\
return NULL;				    \VAR12\
}						    \VAR12\
return VAR14;					    \VAR12\
}							    \VAR12\
\VAR12\
", VAR3);

FUN23(VAR2, VAR3);

FUN6("\
\VAR12\
\VAR12\
",
VAR4);
VAR10 = 0;
VAR11:
return VAR10;
}