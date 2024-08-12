static void FUN1(struct VAR1 *VAR2)
{
size_t VAR3;
VAR4  *VAR5 = (VAR4*)  VAR2->VAR6;
VAR7 *VAR8 = (VAR7*) VAR2->VAR6;
size_t VAR9 = VAR2->VAR10/sizeof(VAR4);

for(VAR3=0; VAR3<VAR9; ++VAR3)
VAR8[VAR3] = FUN2(VAR5[VAR3]);
}