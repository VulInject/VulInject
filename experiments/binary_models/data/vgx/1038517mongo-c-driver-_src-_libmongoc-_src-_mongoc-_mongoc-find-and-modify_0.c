FUN1 (VAR1 *VAR2,
const VAR3 *update)
{
FUN2 (VAR2);

if (update) {
FUN3 (VAR2->update);
VAR2->update = FUN4 (update);
return true;
}

return false;
}