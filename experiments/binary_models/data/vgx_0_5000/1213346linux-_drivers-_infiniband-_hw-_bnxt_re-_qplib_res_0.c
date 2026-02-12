void bnxt_qplib_free_hwq(struct bnxt_qplib_res *res,
struct bnxt_qplib_hwq *hwq)
{
int i;

if (!hwq->max_elements)
return;
if (hwq->level >= PBL_LVL_MAX)
return;

for (i = 0; i < hwq->level + 1; i++) {
if (i == hwq->level)
__free_pbl(res, &hwq->pbl[i], hwq->is_user);
else
__free_pbl(res, &hwq->pbl[i], false);
}

hwq->level = PBL_LVL_MAX;
hwq->max_elements = 0;
hwq->element_size = 0;
hwq->prod = 0;
hwq->cons = 0;
hwq->cp_bit = 0;
}