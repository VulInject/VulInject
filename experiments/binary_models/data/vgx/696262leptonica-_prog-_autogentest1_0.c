*
*  As part of the VAR1, this VAR2 /VAR3/VAR4/auto/VAR5.138.c and
*  /VAR3/VAR4/auto/VAR5.138.VAR6, which contain the same VAR7, using
*  the VAR8 FUN1().  With this VAR9, you do not
*  need to specify the file FUN2 (VAR10.VAR11., "")



static const char  *VAR12[2] = { "", "" };

static const char *VAR13 = ""
""
"";

VAR14 main(int    argc,
char **argv)
{
l_int32     VAR15;
VAR16  *VAR17;

FUN3(1);


VAR17 = FUN4(137);
for (VAR15 = 0; VAR15 < 2; VAR15++)
FUN5(VAR17, VAR12[VAR15], "");
FUN6(&VAR17, NULL);


FUN7("", "", VAR13,
strlen(VAR13));
FUN1("", 138, NULL);
return 0;
}