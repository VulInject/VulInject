static bool FUN1(struct VAR1 *VAR2, int VAR3)
{
struct pmu_hw_events VAR4 *VAR5 = VAR2->VAR5;
int VAR6;

if (!VAR3)
return true;

FUN2(VAR6, &VAR2->VAR7) {
int VAR8 = FUN3(VAR5->VAR3, VAR6);
if (!VAR8)
continue;

if (VAR3 == VAR8)
continue;
if (!FUN4(VAR3) && !FUN4(VAR8))
continue;

FUN5("");
return false;
}

return true;
}