
int main()
{
    *(unsigned int*)0x04000000 = 0x0403;

    for (int i = 0; i < 240; ++i)
    {
    	/* code */
    	((unsigned short*)0x06000000)[i+80*240] = 0x001F;
    }
    

    while(1)
    {
    	
    };

    return 0;
}