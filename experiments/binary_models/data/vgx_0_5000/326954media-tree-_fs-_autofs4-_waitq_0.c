void autofs4_catatonic_mode(struct autofs_sb_info *sbi)
{
struct autofs_wait_queue *wq, *nwq;

mutex_lock(&sbi->wq_mutex);
if (sbi->catatonic) {
mutex_unlock(&sbi->wq_mutex);
return;
}

pr_debug("entering catatonic mode\n");

sbi->catatonic = 1;
wq = sbi->queues;
sbi->queues = NULL;	
while (wq) {
nwq = wq->next;
wq->status = -ENOENT; 
kfree(wq->name.name);
wq->name.name = NULL;
wq->wait_ctr--;
wake_up_interruptible(&wq->queue);
wq = nwq;
}
fput(sbi->pipe);	
sbi->pipe = NULL;
sbi->pipefd = -1;
mutex_unlock(&sbi->wq_mutex);
}