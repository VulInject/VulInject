bool FUN1(VAR1 *VAR2, bool VAR3)
{
if (!VAR2->VAR4 ||
!VAR5[VAR2->VAR6] ||
!VAR5[VAR2->VAR6]->VAR4) {
return true;
}

if (VAR3) {
return VAR5[VAR2->VAR6]->VAR7 >= VAR2->VAR7;
} else {
return VAR5[VAR2->VAR6]->VAR7 > VAR2->VAR7;
}
}