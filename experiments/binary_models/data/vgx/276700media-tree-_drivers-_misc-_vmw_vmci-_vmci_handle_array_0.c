bool FUN1(const struct VAR1 *VAR2,
struct vmci_handle VAR3)
{
size_t VAR4;

for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
if (FUN2(VAR2->VAR6[VAR4], VAR3))
return true;

return false;
}