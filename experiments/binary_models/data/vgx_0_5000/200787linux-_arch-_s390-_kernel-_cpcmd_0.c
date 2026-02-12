int cpcmd(const char *cmd, char *response, int rlen, int *response_code)
{
unsigned long flags;
char *lowbuf;
int len;

if (is_vmalloc_or_module_addr(response)) {
lowbuf = kmalloc(rlen, GFP_KERNEL);
if (!lowbuf) {
pr_warn("The cpcmd kernel function failed to allocate a response buffer\n");
return -ENOMEM;
}
spin_lock_irqsave(&cpcmd_lock, flags);
len = __cpcmd(cmd, lowbuf, rlen, response_code);
spin_unlock_irqrestore(&cpcmd_lock, flags);
memcpy(response, lowbuf, rlen);
kfree(lowbuf);
} else {
spin_lock_irqsave(&cpcmd_lock, flags);
len = __cpcmd(cmd, response, rlen, response_code);
spin_unlock_irqrestore(&cpcmd_lock, flags);
}
return len;
}