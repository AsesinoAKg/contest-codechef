for(int i=0;i<nums.Length;i++)
{
    Console.WriteLine();
    for (int j=0;j<nums.Length;j++)
    {
        if(i==j)
        {
            Console.WriteLine(i + "," + j);
            pow +=nums[i]*nums[j];
        }
        else if(j>i)
        {
            Console.WriteLine(i + "," + j);
            pow += powerfunc(i, j, nums);
        }
        else
        {
            continue;
        }
    }
}
return pow;
}