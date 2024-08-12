bool FUN1(enum dc_lane_count VAR1,
union VAR2 *VAR3)
{
uint32_t VAR4;

for (VAR4 = 0; VAR4 < (VAR5)(VAR1); VAR4++) {
if (!VAR3[VAR4].VAR6.VAR7)
return false;
}
return true;
}