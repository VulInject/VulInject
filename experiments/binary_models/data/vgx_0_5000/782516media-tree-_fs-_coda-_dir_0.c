static int coda_mkdir(struct inode *dir, struct dentry *de, umode_t mode)
{
struct inode *inode;
struct coda_vattr attrs;
const char *name = de->d_name.name;
int len = de->d_name.len;
int error;
struct CodaFid newfid;

if (is_root_inode(dir) && coda_iscontrol(name, len))
return -EPERM;

attrs.va_mode = mode;
error = venus_mkdir(dir->i_sb, coda_i2f(dir), 
name, len, &newfid, &attrs);
if (error)
goto err_out;

inode = coda_iget(dir->i_sb, &newfid, &attrs);
if (IS_ERR(inode)) {
error = PTR_ERR(inode);
goto err_out;
}


coda_dir_inc_nlink(dir);
coda_dir_update_mtime(dir);
d_instantiate(de, inode);
return 0;
err_out:
d_drop(de);
return error;
}