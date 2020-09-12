from selenium import webdriver
from selenium.webdriver.support.select import Select
from selenium.webdriver.common.keys import Keys
from time import sleep

driver = webdriver.Chrome()
driver.get("http://10.9.1.3/")

sleep(0.5)

options = Select(driver.find_element_by_xpath("//*[@id='edit_body']/div[2]/div[16]/select"))
options.select_by_index(2)

user = driver.find_element_by_xpath("//*[@id='edit_body']/div[2]/div[16]/form/input[3]")
user.send_keys("**********")

password = driver.find_element_by_xpath("//*[@id='edit_body']/div[2]/div[16]/form/input[4]")
password.send_keys("***************")

login = driver.find_element_by_xpath('/html/body/div/div/div[2]/div[16]/form/input[2]')
login.send_keys(Keys.ENTER)

driver.quit()
