/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright (c) 2020 Martin Jäger / Libre Solar
 */

/*
 * Needed defines that are normally generated by Zephyr build system
 */

#define DT_N_S_pcb_P_type "TEST-PCB"
#define DT_N_S_pcb_P_version_str "v0.1"

#define DT_N_S_pcb_P_hs_voltage_max 80
#define DT_N_S_pcb_P_ls_voltage_max 32

#define DT_N_S_pcb_P_internal_tref_max 50
#define DT_N_S_pcb_P_mosfets_tj_max 120
#define DT_N_S_pcb_P_mosfets_tau_ja 5

#define DT_N_S_dcdc_EXISTS 1
#define DT_N_S_dcdc_P_pwm_frequency 70000
#define DT_N_S_dcdc_P_pwm_deadtime 300
#define DT_N_S_dcdc_P_current_max 20

#define DT_N_S_outputs_S_pwm_switch_EXISTS 1
#define DT_N_S_outputs_S_pwm_switch_P_current_max 20
#define DT_N_S_outputs_S_pwm_switch_P_pwms_IDX_0_VAL_period 20000000

#define DT_N_S_outputs_S_load_EXISTS 1
#define DT_N_S_outputs_S_load_P_current_max 20

#define DT_N_S_outputs_S_usb_pwr_EXISTS 1

/*
 * ADC
 */
#define DT_N_S_adc_inputs_S_temp_bat_EXISTS 1
#define DT_N_S_adc_inputs_S_temp_bat_P_multiplier 10000
#define DT_N_S_adc_inputs_S_temp_bat_P_divider 1
#define DT_N_S_adc_inputs_S_temp_bat_P_filter_const 5

#define DT_N_S_adc_inputs_S_v_high_P_multiplier 102800
#define DT_N_S_adc_inputs_S_v_high_P_divider 2800
#define DT_N_S_adc_inputs_S_v_high_P_filter_const 5

#define DT_N_S_adc_inputs_S_v_low_P_multiplier 105600
#define DT_N_S_adc_inputs_S_v_low_P_divider 5600
#define DT_N_S_adc_inputs_S_v_low_P_filter_const 5

#define DT_N_S_adc_inputs_S_v_pwm_P_multiplier 25224   // see pwm_2420_lus.dts
#define DT_N_S_adc_inputs_S_v_pwm_P_divider 984
#define DT_N_S_adc_inputs_S_v_pwm_P_offset 2338
#define DT_N_S_adc_inputs_S_v_pwm_P_filter_const 5

// amp gain: 50, resistor: 4 mOhm
#define DT_N_S_adc_inputs_S_i_load_P_multiplier 1000
#define DT_N_S_adc_inputs_S_i_load_P_divider (4 * 50)
#define DT_N_S_adc_inputs_S_i_load_P_filter_const 5

#define DT_N_S_adc_inputs_S_i_dcdc_P_multiplier 1000
#define DT_N_S_adc_inputs_S_i_dcdc_P_divider (4 * 50)
#define DT_N_S_adc_inputs_S_i_dcdc_P_filter_const 5

#define DT_N_S_adc_inputs_S_i_pwm_P_multiplier 1000
#define DT_N_S_adc_inputs_S_i_pwm_P_divider (4 * 50)
#define DT_N_S_adc_inputs_S_i_pwm_P_filter_const 5

#define DT_N_S_adc_inputs_S_vref_mcu_P_filter_const 5

#define DT_N_S_adc_inputs_S_temp_mcu_P_filter_const 5

#define DT_N_S_adc_inputs_FOREACH_CHILD(fn) \
        fn(DT_N_S_adc_inputs_S_v_low) \
        fn(DT_N_S_adc_inputs_S_v_high) \
        fn(DT_N_S_adc_inputs_S_v_pwm) \
        fn(DT_N_S_adc_inputs_S_i_dcdc) \
        fn(DT_N_S_adc_inputs_S_i_load) \
        fn(DT_N_S_adc_inputs_S_i_pwm) \
        fn(DT_N_S_adc_inputs_S_temp_bat) \
        fn(DT_N_S_adc_inputs_S_vref_mcu) \
        fn(DT_N_S_adc_inputs_S_temp_mcu)

/*
 * LEDs
 */
#define DT_N_S_leds_FOREACH_CHILD(fn) \
        fn(DT_N_S_leds_S_pwr)

#define DT_N_S_leds_P_gpios_IDX_0_PH DT_N_S_soc_S_pin_controller_48000000_S_gpio_48000800
#define DT_N_S_leds_P_gpios_IDX_0_VAL_pin 15
#define DT_N_S_leds_P_gpios_IDX_0_VAL_flags 0
#define DT_N_S_leds_P_gpios_LEN 1

#define DT_N_S_soc_S_pin_controller_48000000_S_gpio_48000800_P_label "GPIOC"

#define DT_N_S_leds_S_pwr_EXISTS 1
#define DT_N_S_leds_S_pwr_P_states {1 /* 0x1 */}
