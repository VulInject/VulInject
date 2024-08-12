VAR1
FUN1(Oid VAR2)
{
HeapTuple	VAR3;
Oid			VAR4 = VAR5;

VAR3 = FUN2(VAR6, FUN3(VAR2));

if (FUN4(VAR3))
{
Form_pg_partitioned_table VAR7;

VAR7 = (VAR8) FUN5(VAR3);
VAR4 = VAR7->VAR9;
FUN6(VAR3);
}

return VAR4;
}