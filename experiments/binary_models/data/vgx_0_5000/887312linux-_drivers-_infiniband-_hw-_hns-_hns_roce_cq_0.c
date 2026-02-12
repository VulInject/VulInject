static int alloc_cqn(struct hns_roce_dev *hr_dev, struct hns_roce_cq *hr_cq)
{
struct hns_roce_cq_table *cq_table = &hr_dev->cq_table;
struct hns_roce_bank *bank;
u8 bankid;
int id;

mutex_lock(&cq_table->bank_mutex);
bankid = get_least_load_bankid_for_cq(cq_table->bank);
bank = &cq_table->bank[bankid];

id = ida_alloc_range(&bank->ida, bank->min, bank->max, GFP_KERNEL);
if (id < 0) {
mutex_unlock(&cq_table->bank_mutex);
return id;
}


hr_cq->cqn = (id << CQ_BANKID_SHIFT) | bankid;
bank->inuse++;
mutex_unlock(&cq_table->bank_mutex);

return 0;
}