void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (void *) VAR3;
struct VAR7 *VAR8 = VAR4;
int VAR9 = VAR8->VAR10[0].VAR11;

VAR6->VAR12 = VAR9;
VAR6->VAR13[0] = VAR6->VAR13[1] = 0;
FUN2(VAR9, 0xff);
FUN3(10000);		
FUN4("",
(FUN5(VAR9) & 0x0f) == 0x0f ? "" : "");
FUN4("");
}