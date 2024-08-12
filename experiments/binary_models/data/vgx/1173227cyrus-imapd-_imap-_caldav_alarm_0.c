static int FUN1(VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;

time_t VAR6 = FUN2(VAR2, 2);

if (VAR6 <= VAR5->VAR7) {
struct VAR8 *VAR9 = FUN3(sizeof(struct VAR8));
VAR9->VAR10     = xstrdup((const char *) FUN4(VAR2, 0));
VAR9->VAR11     = FUN2(VAR2, 1);
VAR9->VAR6    = VAR6; 
VAR9->VAR12         = FUN2(VAR2, 3);
VAR9->VAR13    = FUN2(VAR2, 4);
VAR9->VAR14  = FUN2(VAR2, 5);
VAR9->VAR15     = FUN2(VAR2, 6);
VAR9->VAR16     = FUN5((const char *) FUN4(VAR2, 7));
FUN6(&VAR5->VAR17, VAR9);
}
else if (VAR6 < VAR5->VAR18) {
VAR5->VAR18 = VAR6;
}

return 0;
}