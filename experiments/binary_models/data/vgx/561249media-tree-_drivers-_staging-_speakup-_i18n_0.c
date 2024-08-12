VAR1 FUN1(enum msg_index_t VAR2, char *VAR3, size_t VAR4)
{
char *VAR5 = NULL;
unsigned long VAR6;

if ((VAR2 < VAR7) || (VAR2 >= VAR8))
return -VAR9;

VAR5 = FUN2(VAR4 + 1, VAR10);
if (!VAR5)
return -VAR11;

memcpy(VAR5, VAR3, VAR4);
VAR5[VAR4] = '';
if (VAR2 >= VAR12 &&
VAR2 <= VAR13 &&
!FUN3(VAR14[VAR2], VAR5)) {
FUN4(VAR5);
return -VAR9;
}
FUN5(&VAR15.VAR16, VAR6);
if (VAR17[VAR2] != VAR14[VAR2])
FUN4(VAR17[VAR2]);
VAR17[VAR2] = VAR5;
FUN6(&VAR15.VAR16, VAR6);
return 0;
}