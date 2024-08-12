static int FUN1(
struct VAR1 *VAR2,
int VAR3,
char *VAR4,
unsigned int *VAR5)
{
int VAR6;
unsigned char *VAR7;
struct VAR8 *VAR9 = VAR2->VAR10;

VAR7 = FUN2(VAR9->VAR11 * 2 + 1, VAR12);
if (!VAR7)
return -VAR13;

memset(VAR9->VAR14, 0, VAR15);

VAR6 = FUN3(VAR9->VAR14, VAR9->VAR11);
if (FUN4(VAR6))
goto VAR16;

FUN5(VAR7, VAR9->VAR14,
VAR9->VAR11);

*VAR5 += sprintf(VAR4 + *VAR5, "", VAR7);
*VAR5 += 1;

FUN6("", (VAR3) ? "" : "",
VAR7);

VAR16:
FUN7(VAR7);
return VAR6;
}