static VAR1 * FUN1(void * VAR2,
int    VAR3)
{
VAR4 *     VAR5  = (VAR4 *)VAR2;
VAR6 * VAR7   = (VAR6 *)VAR5->VAR7;
u32_t         VAR8   = VAR5->VAR8;
VAR1 *      VAR9 = NULL;
boolean_t     VAR10 = 0;
boolean_t     VAR11 = 0;

FUN2(FUN3(VAR12))

if (VAR3 <= 0)
{
return NULL;
}

if (VAR5->VAR13 == VAR14)
{
FUN4(VAR7, "", VAR8);
return NULL;
}

FUN5(VAR7, VAR8);

VAR5->VAR15++;

FUN6(VAR7, VAR8, &VAR10, &VAR11);

if (VAR11) FUN7(VAR7, VAR8);
if (VAR10) VAR9 = FUN8(VAR7, VAR8, VAR16, VAR3);


FUN9(&VAR7->VAR17);

FUN10(VAR7, VAR8);

return VAR9;
}