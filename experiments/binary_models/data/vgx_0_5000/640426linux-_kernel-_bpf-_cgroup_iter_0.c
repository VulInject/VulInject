static void *cgroup_iter_seq_start(struct seq_file *seq, loff_t *pos)
{
struct cgroup_iter_priv *p = seq->private;

mutex_lock(&cgroup_mutex);


if (*pos > 0) {
if (p->visited_all)
return NULL;


return ERR_PTR(-EOPNOTSUPP);
}

++*pos;
p->terminate = false;
p->visited_all = false;
if (p->order == BPF_CGROUP_ITER_DESCENDANTS_PRE)
return css_next_descendant_pre(NULL, p->start_css);
else if (p->order == BPF_CGROUP_ITER_DESCENDANTS_POST)
return css_next_descendant_post(NULL, p->start_css);
else 
return p->start_css;
}