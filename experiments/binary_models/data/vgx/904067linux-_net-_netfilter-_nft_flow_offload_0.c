static bool FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
bool VAR7 = false;

FUN2(VAR6, &VAR4->VAR8, VAR9) {
if (VAR6->VAR10.VAR2 != VAR2)
continue;

VAR7 = true;
break;
}

return VAR7;
}