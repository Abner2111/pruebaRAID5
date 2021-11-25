#ifndef PRUEBARAID5_STORAGEMANGER_H
#define PRUEBARAID5_STORAGEMANGER_H
#include <iostream>

/**
 * @brief It is a library dedicated to saving files in a RAID 5 configuration. It works by
 */
class StorageManger {
public:
    StorageManger();
    /**
     *
     * @param name name of the file
     * @param content content of the file (text)
     */
    void save(const std::string& name, const std::string& content);

    /**
     *
     * @param drivex number of the drive to deactivate
     */
    void deactivate(int drivex);

    /**
     *
     * @param filename name of the file to retrieve
     * @return the content of the file in std::string format
     */
    std::string getFile(std::string filename);

private:
    //THIS VARIABLE CAN BE CHANGE TO ANY MULTIPLE OF 4 + 1
    int amount_of_drives = 5;

    //ADDRESSES OF THE VOLUMES. if more drives are added more folders have to be created in the RAID folder with Vol<drivenumber>
    std::string drive1[2] = {"./RAID/Vol1", "1"};
    std::string drive2[2] = {"./RAID/Vol2", "1"};
    std::string drive3[2] = {"./RAID/Vol3","1"};
    std::string drive4[2] = {"./RAID/Vol4","1"};
    std::string drive5[2] = {"./RAID/Vol5","1"};

    int currStripe = 1;
};

#endif //PRUEBARAID5_STORAGEMANGER_H
