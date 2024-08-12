static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5;

FUN2(VAR4);
return 0;
}

static const AVOption VAR6[] = {
{ "", "", FUN3(VAR3, VAR7), VAR8, {.VAR9 = 48000}, 1, VAR10, VAR11 },
{ "",    "", FUN3(VAR3, VAR12),    VAR8, {.VAR9 = 2},     1, VAR10, VAR11 },
{ NULL },
};