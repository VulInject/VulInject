static int do_open(struct inode *inode, struct file *filp)
{
struct apm_user *as;

as = kmalloc(sizeof(*as), GFP_KERNEL);
if (as == NULL)
return -ENOMEM;

as->magic = APM_BIOS_MAGIC;
as->event_tail = as->event_head = 0;
as->suspends_pending = as->standbys_pending = 0;
as->suspends_read = as->standbys_read = 0;

as->suser = capable(CAP_SYS_ADMIN);
as->writer = (filp->f_mode & FMODE_WRITE) == FMODE_WRITE;
as->reader = (filp->f_mode & FMODE_READ) == FMODE_READ;
spin_lock(&user_list_lock);
as->next = user_list;
user_list = as;
spin_unlock(&user_list_lock);
filp->private_data = as;
return 0;
}