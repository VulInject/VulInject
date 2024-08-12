static bool FUN1(struct VAR1 *VAR2,
hda_nid_t VAR3, hda_nid_t VAR4)
{
if (!VAR3 || !VAR4)
return false;
return FUN2(VAR2, VAR4, VAR3, true) >= 0;
}