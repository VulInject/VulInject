int attribute_align_arg mpg123_add_substring(mpg123_string *sb, const char *stuff, size_t from, size_t count)
{
debug("adding a substring");
if(!sb || !stuff)
return 0;
if(sb->fill) 
{
if( (SIZE_MAX - sb->fill >= count) 
&& (sb->size >= sb->fill+count || mpg123_grow_string(sb, sb->fill+count)) )
{
memcpy(sb->p+sb->fill-1, stuff+from, count);
sb->fill += count;
sb->p[sb->fill-1] = 0; 
}
else return 0;
}
else
{
if( count < SIZE_MAX && mpg123_grow_string(sb, count+1) )
{
memcpy(sb->p, stuff+from, count);
sb->fill = count+1;
sb->p[sb->fill-1] = 0; 
}
else return 0;
}
return 1;
}