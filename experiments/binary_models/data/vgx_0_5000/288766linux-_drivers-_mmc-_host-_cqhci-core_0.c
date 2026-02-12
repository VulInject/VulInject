static void cqhci_recover_mrq(struct cqhci_host *cq_host, unsigned int tag)
{
struct cqhci_slot *slot = &cq_host->slot[tag];
struct mmc_request *mrq = slot->mrq;
struct mmc_data *data;

if (!mrq)
return;

slot->mrq = NULL;

cq_host->qcnt -= 1;

data = mrq->data;
if (data) {
data->bytes_xfered = 0;
data->error = cqhci_error_from_flags(slot->flags);
} else {
mrq->cmd->error = cqhci_error_from_flags(slot->flags);
}

mmc_cqe_request_done(cq_host->mmc, mrq);
}