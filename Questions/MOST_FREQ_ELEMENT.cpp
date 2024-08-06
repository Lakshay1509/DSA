#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>arr = {304, 304, 225, 225, 225, 9, 9, 9, 9, 845, 845, 845, 845, 845, 610, 610, 610, 610, 610, 610, 990, 990, 990, 990, 990, 990, 990, 703, 703, 703, 703, 703, 703, 703, 703, 196, 196, 196, 196, 196, 196, 196, 196, 196, 486, 486, 486, 486, 486, 486, 486, 486, 486, 486, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 94, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 524, 524, 524, 524, 524, 524, 524, 524, 524, 524, 524, 524, 524, 588, 588, 588, 588, 588, 588, 588, 588, 588, 588, 588, 588, 588, 588, 315, 315, 315, 315, 315, 315, 315, 315, 315, 315, 315, 315, 315, 315, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 459, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068};

    int k =20;
    vector<int> output;

    vector<int>final;

    int count = 1;
    int ans = 1;


    for (int i = 0; i <arr.size(); i++)
    {

        if (arr[i] == arr[i +1])
        {
            count++;
        }

        else
        {

            if (count >= ans)
            {
                ans = count;
                
                output.push_back(arr[i]);
            }
            count = 1;
        }
    }

    reverse(output.begin(),output.end());

    while(output.size()>k){

        output.pop_back();

    }

    cout << "Most frequent element(s): ";
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

   
}