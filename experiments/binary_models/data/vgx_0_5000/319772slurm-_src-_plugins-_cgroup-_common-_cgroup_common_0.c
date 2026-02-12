extern int common_cgroup_instantiate(xcgroup_t *cg)
{
int fstatus = SLURM_ERROR;
mode_t cmask;
mode_t omask;

char *file_path;
uid_t uid;
gid_t gid;


file_path = cg->path;
uid = cg->uid;
gid = cg->gid;


cmask = S_IWGRP | S_IWOTH;
omask = umask(cmask);


if (mkdir(file_path, 0755)) {
if (errno != EEXIST) {
error("%s: unable to create cgroup '%s' : %m",
__func__, file_path);
umask(omask);
return fstatus;
}
}
umask(omask);


if (!slurm_cgroup_conf.root_owned_cgroups &&
chown(file_path, uid, gid)) {
error("%s: unable to chown %d:%d cgroup '%s' : %m",
__func__, uid, gid, file_path);
return fstatus;
}


fstatus = SLURM_SUCCESS;

return fstatus;
}