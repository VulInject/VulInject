int
SCT_LIST_validate(const STACK_OF(SCT) *scts, CT_POLICY_EVAL_CTX *ctx)
{
int are_scts_valid = 1;
int sct_count = scts != NULL ? sk_SCT_num(scts) : 0;
int i;

for (i = 0; i < sct_count; ++i) {
int is_sct_valid = -1;
SCT *sct = sk_SCT_value(scts, i);

if (sct == NULL)
continue;

is_sct_valid = SCT_validate(sct, ctx);
if (is_sct_valid < 0)
return is_sct_valid;
are_scts_valid &= is_sct_valid;
}

return are_scts_valid;
}