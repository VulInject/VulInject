static int init_worker_threads(struct cpt_vf *cptvf)
{
struct pci_dev *pdev = cptvf->pdev;
struct cptvf_wqe_info *cwqe_info;
int i;

cwqe_info = kzalloc(sizeof(*cwqe_info), GFP_KERNEL);
if (!cwqe_info)
return -ENOMEM;

if (cptvf->nr_queues) {
dev_info(&pdev->dev, "Creating VQ worker threads (%d)\n",
cptvf->nr_queues);
}

for (i = 0; i < cptvf->nr_queues; i++) {
tasklet_init(&cwqe_info->vq_wqe[i].twork, vq_work_handler,
(u64)cwqe_info);
cwqe_info->vq_wqe[i].qno = i;
cwqe_info->vq_wqe[i].cptvf = cptvf;
}

cptvf->wqe_info = cwqe_info;

return 0;
}