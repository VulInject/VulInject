int test_extended_list(Extban *extban, ConfigEntry *cep, int *errors)
{
BanContext b;

if (cep->value)
{
memset(&b, 0, sizeof(BanContext));
b.banstr = cep->value;
b.ban_check_types = BANCHK_TKL;
b.what = MODE_ADD;
if (!extban->conv_param(&b, extban))
{
config_error("%s:%i: %s has an invalid value",
cep->file->filename, cep->line_number, cep->name);
*errors = *errors + 1;
return 0;
}
}

for (cep = cep->items; cep; cep = cep->next)
{
memset(&b, 0, sizeof(BanContext));
b.banstr = cep->name;
b.ban_check_types = BANCHK_TKL;
b.what = MODE_ADD;
if (!extban->conv_param(&b, extban))
{
config_error("%s:%i: %s has an invalid value",
cep->file->filename, cep->line_number, cep->name);
*errors = *errors + 1;
return 0;
}
}

return 1;
}