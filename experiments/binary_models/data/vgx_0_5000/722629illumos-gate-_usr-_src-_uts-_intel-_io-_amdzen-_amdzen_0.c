static boolean_t
amdzen_check_dfs(amdzen_t *azn)
{
uint_t i;
boolean_t ret = B_TRUE;

for (i = 0; i < AMDZEN_MAX_DFS; i++) {
amdzen_df_t *df = &azn->azn_dfs[i];
uint_t count = 0;


for (uint_t func = 0; func < AMDZEN_MAX_DF_FUNCS - 1; func++) {
if (df->adf_funcs[func] != NULL) {
count++;
}
}

if (count == 0)
continue;

if (count != 7) {
ret = B_FALSE;
dev_err(azn->azn_dip, CE_WARN, "df %u devices "
"incomplete", i);
} else {
df->adf_flags |= AMDZEN_DF_F_VALID;
azn->azn_ndfs++;
}
}

return (ret);
}