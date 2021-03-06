/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2019, Open AI Lab
 * Author: bingzhang@openailab.com
 */

int ref_clip_fp32(float* in_data, float* data, int size, float max, float min, float scale, int zero_point)
{
    for(int i = 0; i < size; i++)
    {
        
        if(in_data[i] <= min)
        {
            data[i] = min;
        }
        else if(in_data[i] >= max && max != 0)
        {
            data[i] = max;
        }
        else {
            data[i] = in_data[i];
        }
    }
    return 0;
}
