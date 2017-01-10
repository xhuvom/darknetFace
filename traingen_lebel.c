#include <dirent.h>

#include <stdio.h>

 

int main(void)

{

    DIR *d;

    struct dirent *dir;

    d = opendir("/home/xhuv/darknet_faceID/darknet/scripts/labels/sh2/");

    if (d)

    {

        while ((dir = readdir(d)) != NULL)

        {

            printf("/home/xhuv/darknet_faceID/darknet/scripts/labels/sh2/_%s\n", dir->d_name);

        }

        closedir(d);

    }

    return(0);

}
