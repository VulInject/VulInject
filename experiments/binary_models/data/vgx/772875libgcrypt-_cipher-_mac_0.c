FUN1 (gcry_mac_hd_t VAR1, const void *VAR2, size_t VAR3)
{
if (!VAR1->VAR4->VAR5->VAR6)
return VAR7;
if (VAR3 > 0 && !VAR2)
return VAR7;

return VAR1->VAR4->VAR5->FUN2 (VAR1, VAR2, VAR3);
}