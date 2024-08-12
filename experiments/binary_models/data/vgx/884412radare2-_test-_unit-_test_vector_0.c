static bool FUN1(void) {
RPVector VAR1;

FUN2 (&VAR1, 4, 2);
void *VAR2 = (void *)1337;
VAR2 = *FUN3 (&VAR1, 1, VAR2);
FUN4 (VAR1.VAR1.VAR3, 5UL, "");
FUN4 (VAR2, (void *)1337, "");
FUN5 (*((void **)FUN6 (&VAR1.VAR1, 0)), "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 1)), (void *)1337, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 2)), (void *)1, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 3)), (void *)2, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 4)), (void *)3, "");
FUN7 (&VAR1);

FUN2 (&VAR1, 4, 0);
VAR2 = (void *)1337;
VAR2 = *FUN3 (&VAR1, 1, VAR2);
FUN8 ("", VAR1.VAR1.VAR4 >= 5);
FUN4 (VAR1.VAR1.VAR3, 5UL, "");
FUN4 (VAR2, (void *)1337, "");
FUN5 (*((void **)FUN6 (&VAR1.VAR1, 0)), "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 1)), (void *)1337, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 2)), (void *)1, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 3)), (void *)2, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 4)), (void *)3, "");
FUN7 (&VAR1);

FUN2 (&VAR1, 4, 2);
VAR2 = (void *)1337;
VAR2 = *FUN3 (&VAR1, 4, VAR2);
FUN4 (VAR1.VAR1.VAR3, 5UL, "");
FUN4 (VAR2, (void *)1337, "");
FUN5 (*((void **)FUN6 (&VAR1.VAR1, 0)), "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 1)), (void *)1, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 2)), (void *)2, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 3)), (void *)3, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 4)), (void *)1337, "");
FUN7 (&VAR1);

FUN2 (&VAR1, 4, 2);
VAR2 = (void *)1337;
VAR2 = *FUN3 (&VAR1, 4, VAR2);
FUN8 ("", VAR1.VAR1.VAR4 >= 5);
FUN4 (VAR1.VAR1.VAR3, 5UL, "");
FUN4 (VAR2, (void *)1337, "");
FUN5 (*((void **)FUN6 (&VAR1.VAR1, 0)), "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 1)), (void *)1, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 2)), (void *)2, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 3)), (void *)3, "");
FUN4 (*((void **)FUN6 (&VAR1.VAR1, 4)), (void *)1337, "");
FUN7 (&VAR1);

VAR5;
}