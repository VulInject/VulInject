VAR1 *
FUN1(const VAR1 * VAR2, VAR1 ** VAR3)
{
size_t VAR4 = 0;
VAR5 * VAR6;
size_t VAR7;
VAR1 * VAR8;
int VAR9;

if (!FUN2(VAR2)) return FUN3(VAR2);

VAR6 = (VAR5 *) FUN4(CCS VAR2, -1, &VAR4);
if (!VAR6 || !VAR4)
{
if (VAR3) *VAR3 = VAR10"";
return NULL;
}
VAR7 = VAR4*4;	
VAR8 = FUN5(VAR7+5, VAR2);

VAR8[0] = ''; VAR8[1] = ''; VAR8[2] = VAR8[3] = '';

if ((VAR9 = FUN6(VAR4, VAR6, NULL, &VAR7, CS VAR8+4)) != VAR11)
{
FUN7(VAR12) FUN8("", FUN9(VAR9));
free(VAR6);
if (VAR3) *VAR3 = VAR10 FUN9(VAR9);
return NULL;
}
VAR7 += 4;
free(VAR6);
VAR8[VAR7] = '';
return VAR8;
}