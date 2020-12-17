1. # STM32_module_driver

   基于HAL库开发的常用模块驱动

   ## 已完成模块

   1. 0.96OLED显示驱动

      ```c
      /**
        ******************************************************************************
        * 文件名程: oled.h
        * 作    者: Jason_xy
        * 个人博客：https://jason-xy.cn
        * 版    本: V1.0.1
        * 编写日期: 2020-9-18
        * 功    能: OLED模块驱动
        ******************************************************************************
        * 说明：
        * 1.需要先完成I2C的初始化。
        * 
        * 功能：
        * 1.OLED初始化。
        * 2.显存写操作。
        * 3.数字定点显示。
        * 4.字符定点显示。
        * 5.字符串定点显示。
        * 6.汉字显示。
        * 7.bmp位图显示。
        * 8.飞控界面绘制。
        * 9.自定义数据格式显示。
        * 
        * 更新：
        * 2020-12-16
        * 1.修改ShowNum支持int类型带符号数字输出。
        ******************************************************************************
        */
      ```

      

   2. MPU6050陀螺仪、加速度计、温度计驱动

      ```c
      /**
        ******************************************************************************
        * 文件名程: mpu6050.h 
        * 作    者: Jason_xy
        * 个人博客：https://jason-xy.cn
        * 版    本: V1.0
        * 编写日期: 2020-10-2
        * 功    能: MPU6050初始化
        ******************************************************************************
        * 说明：
        * 1.使用在GY-86模块。
        * 2.需要实现配置好I2C驱动。
        * 
        * 功能：
        * 1.MPU6050初始化。
        * 2.I2C基本读写。
        * 3.陀螺仪数据获取。
        * 4.加速度计数据获取。
        * 5.温度计数据获取和解析。
        * 6.宏定义所需寄存器地址。
        ******************************************************************************
        */
      ```

      

   3. GY-86姿态传感器驱动

      ```c
      /**
        ******************************************************************************
        * 文件名程: gy-86.c 
        * 作    者: Jason_xy
        * 个人博客：https://jason-xy.cn
        * 版    本: V1.1.1
        * 编写日期: 2020-10-2
        * 功    能: GY-86初始化
        ******************************************************************************
        * 说明：
        * 1.使用在GY-86模块。
        * 2.需要实现配置好I2C驱动。
        * 3.需要事先配置好MPU6050。
        * 4.需要事先配置好HMC5883L。
        * 5.陀螺仪校准数据计算公式 Gx=Gyro_x-Gyro_xFix。
        * 6.地磁仪校准数据计算公式 Mx=MagScaleX*Mag_x-offsetMagX。
        * 
        * 功能：
        * 1.MPU6050初始化。
        * 2.hmc5883l地磁仪初始化。
        * 3.GY-86初始化。
        * 4.I2C基本读写。
        * 5.陀螺仪数据获取。
        * 6.加速度计数据获取。
        * 7.温度计数据获取和解析。
        * 8.地磁仪数据获取。
        * 9.宏定义所需寄存器地址。
        * 10.陀螺仪零偏矫正。
        * 11.磁力计校准。
        * 12.陀螺仪显式数据输出。
        * 13.磁力计显式数据输出。
        * 
        * 更新：
        * 2020-12-15
        * 1.数据获取修改uint16_t为short。
        * 2.添加陀螺仪零偏矫正。
        * 2020-12-16
        * 1.温度传感器数据Bug修复。
        * 2020-12-17
        * 1.添加磁力计校准，8字校准方式。
        * 2.磁力计显式数据读出。
        * 3.陀螺仪显式数据读出。
        ******************************************************************************
        */
      ```
   
      
   
   4. 无刷电机应用驱动
   
      ```c
      /**
        ******************************************************************************
        * 文件名程: motor.h 
        * 作    者: Jason_xy
        * 个人博客：https://jason-xy.cn
        * 版    本: V1.0
        * 编写日期: 2020-10-12
        * 功    能: 电机模块驱动
        ******************************************************************************
     * 说明：
        * 1.需要先完成TIM的初始化。
     * 
        * 功能：
     * 1.电机初始化。
        * 2.改变电机转速。
        * 3.电机测试。
        * 4.电机锁定。
        ******************************************************************************
        */
      ```
   
      
   
   5. FS-iA接收机驱动
   
      ```c
      /**
        ******************************************************************************
        * 文件名程: controller.h
        * 作    者: Jason_xy
        * 个人博客：https://jason-xy.cn
        * 版    本: V1.0
        * 编写日期: 2020-11-15
        * 功    能: 接收机模块驱动
     ******************************************************************************
        * 说明：
        * 1.需要先完成TIM的初始化。
        * 2.需提前设置时钟频率100MHz（根据自己的板子设定，比我我的Psc = 99）捕获通道每一个节拍1us。
        * 
        * 功能：
        * 1.接收机数据采集。
        * 2.根据采集数据改变马达转速。
        ******************************************************************************
        */
      ```
   
      

