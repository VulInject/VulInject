static void
FUN1(void *VAR1)
{
(void)VAR1;

VAR2 = FUN2();
FUN3(VAR3, VAR4);


const char VAR5[] =
""
""
""
""
""
""
""
"";

FUN4(0, VAR6, FUN5(VAR5, strlen(VAR5)));
FUN4(8, VAR6, FUN6(VAR2));
VAR7 *VAR8 = FUN7(VAR2, 2);
FUN8(VAR8->VAR9, VAR6, "", 20);
FUN8(VAR8->VAR10, VAR6, "", 32);


const char VAR11[] =
""
""
""
""
""
""
""
""
""
""
""
""
""
""
;

FUN4(0, VAR6, FUN5(VAR11, strlen(VAR11)));
FUN4(13, VAR6, FUN6(VAR2));
VAR8 = FUN7(VAR2, 9);
FUN8(VAR8->VAR9, VAR6, ""You have made a VAR12", 20);
FUN8(VAR8->VAR10, VAR6, "" But no VAR13. VAR14", 32);

VAR8 = FUN7(VAR2, 12);
FUN8(VAR8->VAR9, VAR6, "", 20);
FUN8(VAR8->VAR10, VAR6,
"", 32);


const char VAR15[] =
"";
FUN4(0, VAR6, FUN5(VAR15, strlen(VAR15)));
FUN4(14, VAR6, FUN6(VAR2));
VAR8 = FUN7(VAR2, 13);
FUN8(VAR8->VAR9, VAR6, "", 20);
FUN8(VAR8->VAR10, VAR6, "", 32);

VAR16:
FUN9();
FUN10(VAR2);
}