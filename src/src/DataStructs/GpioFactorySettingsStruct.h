#ifndef DATASTRUCTS_GPIOFACTORYSETTINGSSTRUCT_H
#define DATASTRUCTS_GPIOFACTORYSETTINGSSTRUCT_H

#include "../DataStructs/DeviceModel.h"
#include "../DataStructs/EthernetParameters.h"
#include "../DataStructs/NetworkMedium.h"


struct GpioFactorySettingsStruct {
  GpioFactorySettingsStruct(DeviceModel model = DeviceModel_default);

  int8_t          button[4];
  int8_t          relais[4];
  int8_t          status_led;
  int8_t          i2c_sda;
  int8_t          i2c_scl;
  int8_t          eth_phyaddr;
  EthPhyType_t    eth_phytype;
  int8_t          eth_mdc;
  int8_t          eth_mdio;
  int8_t          eth_power;
  EthClockMode_t  eth_clock_mode;
  NetworkMedium_t active_network_medium;
};


#endif // DATASTRUCTS_GPIOFACTORYSETTINGSSTRUCT_H
