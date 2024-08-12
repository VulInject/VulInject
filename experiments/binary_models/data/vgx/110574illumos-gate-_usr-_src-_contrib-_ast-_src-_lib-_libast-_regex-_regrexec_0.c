extern int
FUN1(const VAR1* VAR2, const char* VAR3, size_t VAR4, size_t VAR5, VAR6* VAR7, regflags_t VAR8, int VAR9, void* VAR10, regrecord_t VAR11)
{
if (VAR7)
{
VAR12*	VAR13;
ssize_t		VAR14;
int		VAR15;

if (!(VAR13 = FUN2(0, VAR12, VAR5, 0)))
return -1;
if (!(VAR15 = FUN3(VAR2, VAR3, VAR4, VAR5, VAR13, VAR8, VAR9, VAR10, VAR11)))
for (VAR14 = 0; VAR14 < VAR5; VAR14++)
{
VAR7[VAR14].VAR16 = VAR13[VAR14].VAR16;
VAR7[VAR14].VAR17 = VAR13[VAR14].VAR17;
}
free(VAR13);
return VAR15;
}
return FUN3(VAR2, VAR3, VAR4, 0, VAR18, VAR8, VAR9, VAR10, VAR11);
}