select round(sum(if(min_order=min_prefer,1,0))*100/count(*),2) as immediate_percentage
from 
    ( select min(order_date)as min_order, min(customer_pref_delivery_date) as min_prefer
      from delivery
      group by customer_id  
    ) as min_table;