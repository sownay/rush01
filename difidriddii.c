void	tail_fd(int fd, int bytes)
{
	char	*buf;
	char	c;
	int		i;

	if (bytes <= 0)
		return ;
	buf = malloc(bytes);
	if (!buf)
		return ;
	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (i < bytes)
			buf[i++] = c;
		else
		{
			ft_memmove(buf, buf + 1, bytes - 1);
			buf[bytes - 1] = c;
		}
	}
	write(1, buf, i);
	free(buf);
}