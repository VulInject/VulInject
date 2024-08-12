static void
FUN1(void)
{
if (mkdir("", 0000) == -1)
FUN2(1, "");

FUN3(FUN4("", VAR1 | VAR2 | VAR3));

FUN3(FUN5("", VAR4 | 0700, FUN6(22, 0)));

FUN3(chown("", 0, -1));
FUN3(chmod("", 0000));
FUN3(FUN7("", VAR5));
FUN3(FUN8("", NULL));

FUN3(chmod("", VAR6 | 0700));
FUN3(chown("", 0, -1));
FUN3(FUN9("", ""));
FUN3(unlink(""));
}