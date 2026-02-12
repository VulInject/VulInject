u16 rvu_npc_exact_drop_rule_to_pcifunc(struct rvu *rvu, u32 drop_rule_idx)
{
struct npc_exact_table *table;
int i;

table = rvu->hw->table;

for (i = 0; i < NPC_MCAM_DROP_RULE_MAX; i++) {
if (!table->drop_rule_map[i].valid)
break;

if (table->drop_rule_map[i].drop_rule_idx != drop_rule_idx)
continue;

return table->drop_rule_map[i].pcifunc;
}

dev_err(rvu->dev, "%s: drop mcam rule index (%d) >= NPC_MCAM_DROP_RULE_MAX\n",
__func__, drop_rule_idx);
return -1;
}